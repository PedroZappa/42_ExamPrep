/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 15:52:22 by passunca          #+#    #+#             */
/*   Updated: 2025/03/31 15:52:28 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title)
	: _name(name), _title(title) {
	std::cout << getName() << ": This looks like another boring day."
			  << std::endl;
}

Warlock::~Warlock() {
	std::cout << getName() << ": My job here is done!" << std::endl;
}

const std::string &Warlock::getName() const {
	return (_name);
}

const std::string &Warlock::getTitle() const {
	return (_title);
}

void Warlock::setTitle(const std::string &title) {
	_title = title;
}

void Warlock::introduce() const {
	std::cout << getName() << ": I am " << getName() << ", " << getTitle()
			  << "!" << std::endl;
}

void Warlock::learnSpell(ASpell *spell) {
	_spells.learnSpell(spell);
}

void Warlock::forgetSpell(const std::string spell) {
	_spells.forgetSpell(spell);
}

void Warlock::launchSpell(std::string spell, ATarget const &target) {
	ASpell *newSpell = _spells.createSpell(spell);
	if (newSpell) {
		newSpell->launch(target);
		delete newSpell;
	}
}
