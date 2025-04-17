/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 09:42:22 by passunca          #+#    #+#             */
/*   Updated: 2025/04/17 09:50:46 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget() {
}

ATarget::ATarget(std::string const &type) : _targetType(type) {
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

std::string ATarget::getType() const {
	return (_targetType);
}

void ATarget::getHitBySpell(ASpell const &ref) const {
	std::cout << _targetType << " has been " << ref.getEffects() << "!"
			  << std::endl;
}
