/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:20:19 by passunca          #+#    #+#             */
/*   Updated: 2025/04/17 11:36:31 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {
}

TargetGenerator::~TargetGenerator() {
	std::map<std::string, ATarget *>::iterator it;
	for (it = _targetBook.begin(); it != _targetBook.end(); it++) 
	  delete it->second;
	_targetBook.clear();

}

void TargetGenerator::learnTargetType(ATarget *spell) {
	std::map<std::string, ATarget *>::iterator it =
		_targetBook.find(spell->getType());
	if (it == _targetBook.end())
		_targetBook[spell->getType()] = spell->clone();
}

void TargetGenerator::forgetTargetType(std::string const &spell) {
	std::map<std::string, ATarget *>::iterator it =
		_targetBook.find(spell);
	if (it != _targetBook.end()) {
		delete it->second;
		_targetBook.erase(it);
	}
}

ATarget *TargetGenerator::createTarget(std::string const &spell) {
	std::map<std::string, ATarget *>::iterator it =
		_targetBook.find(spell);
	if (it != _targetBook.end())
		return (it->second->clone());
	return (NULL);
}
