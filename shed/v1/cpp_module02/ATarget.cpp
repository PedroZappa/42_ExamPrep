/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 10:58:49 by passunca          #+#    #+#             */
/*   Updated: 2025/04/02 11:00:52 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget() {
}

ATarget::ATarget(std::string const &targetType) : _targetType(targetType) {
}

ATarget::~ATarget() {}

ATarget::ATarget(ATarget const &ref) {
	*this = ref;
}

ATarget &ATarget::operator=(ATarget const &ref) {
	if (this != &ref)
		_targetType = ref.getType();
	return (*this);
}

std::string const &ATarget::getType() const {
	return (_targetType);
}

void ATarget::getHitBySpell(ASpell const &spell) const {
	std::cout << _targetType << " has been " << spell.getEffects()
			  << "!" << std::endl;
}
