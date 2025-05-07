/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 08:12:15 by passunca          #+#    #+#             */
/*   Updated: 2025/05/07 08:14:37 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ATarget.hpp"

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
	std::cout << getType() << ": has been " << spell.getEffects() << "!\n";
}
