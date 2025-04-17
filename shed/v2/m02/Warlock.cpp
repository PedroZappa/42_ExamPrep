/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 09:16:11 by passunca          #+#    #+#             */
/*   Updated: 2025/04/17 09:26:10 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title)
	: _name(name), _title(title) {
	std::cout << getName() << ": This looks like another boring day."
			  << std::endl;
}

Warlock::~Warlock() {
	std::cout << getName() << ": My job here is done!" << std::endl;
}

std::string Warlock::getName() const {
	return (_name);
}

std::string Warlock::getTitle() const {
	return (_title);
}

void Warlock::setTitle(std::string const &title) {
	_title = title;
}

void Warlock::introduce() const {
	std::cout << getName() << ": I am " << getName() << ", " << getTitle()
			  << std::endl;
}

void Warlock::learnSpell(ASpell *spell) {
	std::map<std::string, ASpell *>::iterator it =
		_spellBook.find(spell->getName());
	if (it == _spellBook.end())
		_spellBook[spell->getName()] = spell->clone();
}

void Warlock::forgetSpell(std::string const &spell) {
	std::map<std::string, ASpell *>::iterator it =
		_spellBook.find(spell);
	if (it != _spellBook.end()) {
		delete it->second;
		_spellBook.erase(it);
	}
}

void Warlock::launchSpell(std::string const &spell, ATarget &target) {
	std::map<std::string, ASpell *>::iterator it =
		_spellBook.find(spell);
	if (it != _spellBook.end())
		it->second->launch(target);
}
