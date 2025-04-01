/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 17:34:30 by passunca          #+#    #+#             */
/*   Updated: 2025/03/31 17:34:32 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {
}

TargetGenerator::TargetGenerator(TargetGenerator const &ref) {
	*this = ref;
}

TargetGenerator &TargetGenerator::operator=(TargetGenerator const &ref) {
	if (this != &ref) {
		std::map<std::string, ATarget *>::iterator it; // Clean
		for (it = _targetBook.begin(); it != _targetBook.end(); ++it)
			delete it->second;
		_targetBook.clear();
		
		std::map<std::string, ATarget *>::const_iterator cit; // Deep copy
		for (cit = ref._targetBook.begin(); it != ref._targetBook.end(); ++cit)
			_targetBook[cit->first] = cit->second->clone();
	}
	return (*this);
}

TargetGenerator::~TargetGenerator() {
	std::map<std::string, ATarget *>::iterator it;

	for (it = _targetBook.begin(); it != _targetBook.end(); ++it)
		delete it->second;
	_targetBook.clear();
}

void TargetGenerator::learnTargetType(ATarget *target) {
	std::map<std::string, ATarget *>::iterator it =
		_targetBook.find(target->getType());

	if (it == _targetBook.end())
		_targetBook[target->getType()] = target->clone();
}

void TargetGenerator::forgetTargetType(const std::string &type) {
	std::map<std::string, ATarget *>::iterator it =
		_targetBook.find(type);

	if (it != _targetBook.end()) {
		delete it->second;
		_targetBook.erase(it);
	}	
}

ATarget *TargetGenerator::createTarget(const std::string &type) {
	std::map<std::string, ATarget *>::iterator it =
		_targetBook.find(type);
	ATarget *target = NULL;
	
	if (it != _targetBook.end())
		target = it->second->clone();

	return (target);
}
