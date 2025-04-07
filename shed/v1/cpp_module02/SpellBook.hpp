/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:31:43 by passunca          #+#    #+#             */
/*   Updated: 2025/04/02 16:45:44 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <map>
#include <string>
#include "ASpell.hpp"

class ASpell;

class SpellBook {
public:
	SpellBook();
	~SpellBook();

	void learnSpell(ASpell *spell);
	void forgetSpell(std::string const &spellName);
	ASpell *createSpell(std::string const &spellName);

private:
	std::map<std::string, ASpell *> _spellBook;

	SpellBook(SpellBook const &ref);
	SpellBook &operator=(SpellBook const &ref);
};
