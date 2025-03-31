/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 10:46:18 by passunca          #+#    #+#             */
/*   Updated: 2025/03/31 12:20:54 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell() {
}

ASpell::ASpell(const std::string &name, const std::string &effects)
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

// Getters
std::string ASpell::getName() const {
	return (_name);
}

std::string ASpell::getEffects() const {
	return (_effects);
}
// Public Methods

void ASpell::launch(ATarget const &target) const {
	target.getHitBySpell(*this);
}
