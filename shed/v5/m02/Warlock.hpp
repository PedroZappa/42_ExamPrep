/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 10:57:47 by passunca          #+#    #+#             */
/*   Updated: 2025/05/04 11:54:56 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <map>
#include "ASpell.hpp"
#include "SpellBook.hpp"

class Warlock {
  public:
	Warlock();
	Warlock(std::string const &name, std::string const &title);
	~Warlock();

	std::string getName() const;
	std::string getTitle() const;

	void setTitle(std::string const &title);
	void introduce() const;

	void learnSpell(ASpell *spell);
	void forgetSpell(std::string const &spell);
	void launchSpell(std::string const &spell, ATarget const &target);

  private:
	std::string _name;
	std::string _title;
	SpellBook _spellBook;

	Warlock(Warlock const &ref);
	Warlock &operator=(Warlock const &ref);
};
