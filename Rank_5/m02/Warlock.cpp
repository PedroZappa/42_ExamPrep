/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 09:15:55 by passunca          #+#    #+#             */
/*   Updated: 2025/04/15 09:59:54 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title)
	: _name(name), _title(title) {
	std::cout << getName() << ": This looks like another boring day."
			  << std::endl;
}

Warlock::~Warlock() {
	std::cout << getName() << ": My job here is done" << std::endl;
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
	std::cout << getName() << ": This is " << getName() << ", " << getTitle()
			  << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell) {
	_spellBook.learnSpell(spell);
}

void Warlock::forgetSpell(std::string const &spell) {
	_spellBook.forgetSpell(spell);
}

void Warlock::launchSpell(std::string const &spell, ATarget const &target) {
	ASpell *ret = _spellBook.createSpell(spell);
	if (ret) {
		ret->launch(target);
		delete ret;
	}
}
