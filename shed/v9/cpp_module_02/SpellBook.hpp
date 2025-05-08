/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 10:44:39 by passunca          #+#    #+#             */
/*   Updated: 2025/05/08 10:53:54 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <map>
#include "ASpell.hpp"

class ASpell;

class SpellBook {
  public:
	SpellBook();
	~SpellBook();

	void learnSpell(ASpell *spell);
	void forgetSpell(std::string const &spell);
	ASpell *createSpell(std::string const &spell);

  private:
	std::map<std::string, ASpell *> _spellBook;

	SpellBook(SpellBook const &ref);
	SpellBook &operator=(SpellBook const &ref);
};

