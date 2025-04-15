/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 10:26:57 by passunca          #+#    #+#             */
/*   Updated: 2025/04/10 10:33:36 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget(std::string const &type) : _targetType(type) {
}

ATarget::ATarget(ATarget const &ref) {
	*this = ref;
}

ATarget &ATarget::operator=(ATarget const &ref) {
	if (this != &ref) {
		_targetType = ref.getType();
	}
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
