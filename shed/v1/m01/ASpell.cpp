/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:44:15 by passunca          #+#    #+#             */
/*   Updated: 2025/04/15 18:17:55 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ASpell.hpp"

ASpell::ASpell(std::string const &name, std::string const &effects) {}

ASpell::ASpell(ASpell const &){}

ASpell &ASpell ::operator=(ASpell const &ref) {}

std::string const &ASpell::getName() const {
	return (_name);
}

std::string const &ASpell::getEffects() const {
	return (_effects);
}

void ASpell::launch(ATarget const &target) const {}
