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
#include "ASpell.hpp"

SpellBook::SpellBook() {
}

SpellBook::~SpellBook() {
	std::map<std::string, ASpell *>::iterator it;

	for (it = _spellBook.begin(); it != _spellBook.end(); ++it)
		delete it->second;
	_spellBook.clear();
}

SpellBook &SpellBook::operator=(SpellBook const &ref) {
	if (this != &ref) {
		std::map<std::string, ASpell *>::iterator it;

		for (it = _spellBook.begin(); it != _spellBook.end(); ++it)
			delete it->second;
		_spellBook.clear();

		std::map<std::string, ASpell *>::const_iterator cit;
		for (cit = ref._spellBook.begin(); cit != ref._spellBook.end(); ++cit)
			_spellBook[cit->first] = cit->second->clone();
	}
	return (*this);
}

void SpellBook::learnSpell(ASpell *spell) {
	std::map<std::string, ASpell *>::iterator it;

	if (it == _spellBook.end())
		_spellBook[spell->getName()] = spell->clone();
}

void SpellBook::forgetSpell(std::string const &spellName) {
	std::map<std::string, ASpell *>::iterator it = _spellBook.find(spellName);

	if (it != _spellBook.end()) {
		delete it->second;
		_spellBook.erase(it);
	}
}

ASpell *SpellBook::createSpell(std::string const &spellName) {
	std::map<std::string, ASpell *>::iterator it = _spellBook.find(spellName);
	ASpell *spell = NULL;

	if (it != _spellBook.end())
		spell = it->second->clone();
	return (spell);
		
	
}
