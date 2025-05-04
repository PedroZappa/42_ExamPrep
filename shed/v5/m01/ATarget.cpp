/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 11:29:08 by passunca          #+#    #+#             */
/*   Updated: 2025/05/04 11:32:55 by passunca         ###   ########.fr       */
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

void ATarget::getHitBySpell(ASpell const &ref) const {
	std::cout << getType() << " has been " << ref.getEffects() << "!\n";
}
