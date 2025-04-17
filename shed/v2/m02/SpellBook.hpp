/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SpellBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:07:21 by passunca          #+#    #+#             */
/*   Updated: 2025/04/17 11:16:12 by passunca         ###   ########.fr       */
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
	ASpell *createSpell(std::string const &spell,ATarget &target);

  private:
	std::map<std::string, ASpell *> _spellBook;

	SpellBook(SpellBook const &ref);
	SpellBook &operator=(SpellBook const &ref);
};

