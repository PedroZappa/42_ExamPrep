/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:22:05 by passunca          #+#    #+#             */
/*   Updated: 2025/04/16 12:19:43 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title)
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
	_spellBook.learnSpell(spell);
}

void Warlock::forgetSpell(std::string const &name) {
	_spellBook.forgetSpell(name);
}

void Warlock::launchSpell(std::string const &name, ATarget const &target) {
	ASpell *ret = _spellBook.createSpell(name);
	if (ret) {
		ret->launch(target);
		delete ret;
	}
}
