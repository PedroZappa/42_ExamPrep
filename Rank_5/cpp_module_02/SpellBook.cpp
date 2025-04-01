/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 17:03:48 by passunca          #+#    #+#             */
/*   Updated: 2025/03/31 17:26:27 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SpellBook.hpp"

SpellBook::SpellBook() {
}

SpellBook::SpellBook(SpellBook const &ref) {
	*this = ref;
}

SpellBook &SpellBook::operator=(SpellBook const &ref) {
	if (this != &ref) {
		std::map<std::string, ASpell *>::iterator it; // Clean
		for (it = _spellBook.begin(); it != _spellBook.end(); ++it)
			delete it->second;
		_spellBook.clear();
		
		std::map<std::string, ASpell *>::const_iterator cit; // Deep copy
		for (cit = ref._spellBook.begin(); it != ref._spellBook.end(); ++cit)
			_spellBook[cit->first] = cit->second->clone();
	}
	return (*this);
}

SpellBook::~SpellBook() {
	std::map<std::string, ASpell *>::iterator it;

	for (it = _spellBook.begin(); it != _spellBook.end(); ++it)
		delete it->second;
	_spellBook.clear();
}

void SpellBook::learnSpell(ASpell *spell) {
	std::map<std::string, ASpell *>::iterator it;

	if (it == _spellBook.end())
		_spellBook[spell->getName()] = spell->clone();
}

void SpellBook::forgetSpell(const std::string &name) {
	std::map<std::string, ASpell *>::iterator it = _spellBook.find(name);

	if (it != _spellBook.end()) {
		delete it->second;
		_spellBook.erase(it);
	}
}

ASpell *SpellBook::createSpell(std::string const &name) {
	std::map<std::string, ASpell *>::iterator it = _spellBook.find(name);
	ASpell *spell = NULL;

	if (it != _spellBook.end())
		spell = it->second->clone();
	return (spell);
}
