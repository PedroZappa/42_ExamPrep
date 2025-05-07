/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 08:31:13 by passunca          #+#    #+#             */
/*   Updated: 2025/05/07 08:36:08 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook() {
}
SpellBook::~SpellBook() {
	std::map<std::string, ASpell *>::iterator it;
	for (it = _spellBook.begin(); it != _spellBook.end(); it++)
		delete it->second;
	_spellBook.clear();
}

void SpellBook::learnSpell(ASpell *spell) {
	std::map<std::string, ASpell *>::iterator it =
		_spellBook.find(spell->getName());
	if (it == _spellBook.end())
		_spellBook[spell->getName()] = spell->clone();
}
void SpellBook::forgetSpell(std::string const &spell) {
	std::map<std::string, ASpell *>::iterator it =
		_spellBook.find(spell);
	if (it != _spellBook.end()) {
		delete it->second;
		_spellBook.erase(it);
	}
}
ASpell *SpellBook::createSpell(std::string const &spell) {
	std::map<std::string, ASpell *>::iterator it =
		_spellBook.find(spell);
	if (it != _spellBook.end())
		return (it->second->clone());
	return (NULL);
}
