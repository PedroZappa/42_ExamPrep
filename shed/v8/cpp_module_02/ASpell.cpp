/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 08:05:34 by passunca          #+#    #+#             */
/*   Updated: 2025/05/07 08:15:41 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell(std::string const &name, std::string const &effects)
	: _name(name), _effects(effects) {
}
ASpell::~ASpell() {
}

ASpell::ASpell(ASpell const &ref) {
	*this = ref;
}
ASpell &ASpell::operator=(ASpell const &ref) {
	if (this != &ref) {
		_name = ref.getName();
		_effects = ref.getEffects();
	}
	return (*this);
}

std::string ASpell::getName() const {
	return (_name);
}
std::string ASpell::getEffects() const {
	return (_effects);
}

void ASpell::launch(ATarget const &target) const {
	target.getHitBySpell(*this);
}
