/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 11:01:56 by passunca          #+#    #+#             */
/*   Updated: 2025/05/04 12:00:25 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock() {
}
Warlock::Warlock(std::string const &name, std::string const &title)
	: _name(name), _title(title) {
	std::cout << getName() << ": This looks like another boring day.\n";
}
Warlock::~Warlock() {
	std::cout << getName() << ": My job here is done!\n";
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
	std::cout << getName() << ": I am " << getName();
	std::cout << ", " << getTitle() << "!\n";
}

void Warlock::learnSpell(ASpell *spell) {
	_spellBook.learnSpell(spell);
}
void Warlock::forgetSpell(std::string const &spell) {
	_spellBook.forgetSpell(spell);
}
void Warlock::launchSpell(std::string const &spell, ATarget const &target) {
	ASpell *tmp = _spellBook.createSpell(spell);
	if (tmp) {
		tmp->launch(target);
		delete tmp;
	}
}
