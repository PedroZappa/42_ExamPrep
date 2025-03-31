/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 12:04:25 by passunca          #+#    #+#             */
/*   Updated: 2025/03/31 12:18:07 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#include "ATarget.hpp"

ATarget::ATarget() {
}

ATarget::ATarget(const std::string &type) {
}

ATarget::~ATarget() {
}

ATarget::ATarget(ATarget const &ref) {
	*this = ref;
}

ATarget &ATarget::operator=(ATarget const &ref) {
	if (this != &ref) 
		_targetType = ref.getType();
	return (*this);
}

// Getters
const std::string &ATarget::getType() const {
	return (_targetType);
}
// Public Methods
void ATarget::getHitBySpell(ASpell const &spell) const {
	std::cout << _targetType << " has been " << spell.getEffects() << "!" << std::endl;
}
