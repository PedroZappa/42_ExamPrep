/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 09:27:03 by passunca          #+#    #+#             */
/*   Updated: 2025/04/21 12:38:26 by passunca         ###   ########.fr       */
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
	if (this != &ref) {
		_targetType = ref.getType();
	}
	return (*this);
}

std::string ATarget::getType() const {
	return (_targetType);
}

void ATarget::getHitBySpell(ASpell const &target) const {
	std::cout << getType() << " has been " << target.getEffects() << "!"
			  << std::endl;
}
