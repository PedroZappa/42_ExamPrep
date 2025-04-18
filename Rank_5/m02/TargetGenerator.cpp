/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 12:40:12 by passunca          #+#    #+#             */
/*   Updated: 2025/04/15 12:57:02 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator() {
}

TargetGenerator::~TargetGenerator() {
}

void TargetGenerator::learnTargetType(ATarget *target) {
	std::map<std::string, ATarget *>::iterator it =
		_targetBook.find(target->getType());
	if (it == _targetBook.end())
		_targetBook[target->getType()] = target->clone();
}

void TargetGenerator::forgetTargetType(std::string const &target) {
	std::map<std::string, ATarget *>::iterator it =
		_targetBook.find(target);
	if (it != _targetBook.end()) {
		delete it->second;
		_targetBook.erase(it);
	}
}

ATarget *TargetGenerator::createTarget(std::string const &target) {
	std::map<std::string, ATarget *>::iterator it =
		_targetBook.find(target);
	if (it != _targetBook.end())
		return (it->second->clone());
	return (NULL);
}
