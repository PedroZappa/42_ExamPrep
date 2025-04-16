/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 09:31:33 by passunca          #+#    #+#             */
/*   Updated: 2025/04/16 10:02:37 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget(std::string const &target) : _targetType(target) {
}

ATarget::ATarget(ATarget const &ref) {
	*this = ref;
}

ATarget &ATarget::operator=(ATarget const &ref) {
	if (this != &ref)
		_targetType = ref._targetType;
	return (*this);
}

ATarget::~ATarget() {
}

std::string ATarget::getType() const {
	return (_targetType);
}

void ATarget::getHitBySpell(ASpell const &spell) const {
	std::cout << _targetType << " has been " << spell.getEffects() << "!"
			  << std::endl;
}
