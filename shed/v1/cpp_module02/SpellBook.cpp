/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:31:30 by passunca          #+#    #+#             */
/*   Updated: 2025/04/02 17:02:05 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook() {
}

SpellBook::~SpellBook() {
	std::map<std::string, ASpell *>::iterator it;

	for (it = _spellBook.begin();  it != _spellBook.end(); ++it)
		delete it->second;
	_spellBook.clear();
}

void SpellBook::learnSpell(ASpell *spell) {
}

void SpellBook::forgetSpell(std::string const &spellName) {
}

ASpell *SpellBook::createSpell(std::string const &spellName) {
}
