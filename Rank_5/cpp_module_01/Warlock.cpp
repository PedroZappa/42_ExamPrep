/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 08:55:23 by passunca          #+#    #+#             */
/*   Updated: 2025/03/31 15:41:26 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title)
	: _name(name), _title(title) {
}

Warlock::~Warlock() {
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
	std::map<std::string, ASpell *>::iterator it = _spells.find(spell->getName());
	if (it == _spells.end())
		_spells[spell->getName()] = spell->clone();
}

void Warlock::forgetSpell(std::string spell) {
	std::map<std::string, ASpell *>::iterator it = _spells.find(spell);
	if (it != _spells.end()) {
		delete it->second;
		_spells.erase(it);
	}
}

void Warlock::launchSpell(std::string spell, ATarget const &target) {
	std::map<std::string, ASpell *>::iterator it = _spells.find(spell);
	if (it != _spells.end())
		it->second->launch(target);
}
