/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:56:19 by passunca          #+#    #+#             */
/*   Updated: 2025/04/16 12:13:04 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook() {
}

SpellBook::~SpellBook() {
	std::map<std::string, ASpell *>::iterator it;
	for (it = _spellBook.begin(); it != _spellBook.end(); ++it) {
		delete it->second;
	}
	_spellBook.clear();
}

void SpellBook::learnSpell(ASpell *spell) {
	std::map<std::string, ASpell *>::iterator it =
		_spellBook.find(spell->getName());
	if (it == _spellBook.end())
		_spellBook[spell->getName()] = spell->clone();
}

void SpellBook::forgetSpell(std::string const &name) {
	std::map<std::string, ASpell *>::iterator it =
		_spellBook.find(name);
	if (it != _spellBook.end()){
		delete it->second;
		_spellBook.erase(it);
	}
}

ASpell *SpellBook::createSpell(std::string const &name) {
	ASpell *ret = NULL;
	std::map<std::string, ASpell *>::iterator it =
		_spellBook.find(name);
	if (it != _spellBook.end())
		ret = it->second->clone();
	return (ret);
}
