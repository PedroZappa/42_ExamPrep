/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 07:52:29 by passunca          #+#    #+#             */
/*   Updated: 2025/05/05 07:58:04 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

ATarget::ATarget() {
}
ATarget::ATarget(std::string const &type) : _type(type) {
}
ATarget::~ATarget() {
}

ATarget::ATarget(ATarget const &ref) {
	*this = ref;
}
ATarget &ATarget::operator=(ATarget const &ref) {
	if (this != &ref)
		_type = ref.getType();
	return (*this);
}

std::string ATarget::getType() const {
	return (_type);
}

void ATarget::getHitBySpell(ASpell const &spell) const {
	std::cout << getType() << " has been " << spell.getEffects() << "!\n";
}
