/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 08:08:45 by passunca          #+#    #+#             */
/*   Updated: 2025/05/06 09:28:51 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <map>
#include "ASpell.hpp"
#include "SpellBook.hpp"

class ASpell;

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
	void forgetSpell(std::string const &name);
	void launchSpell(std::string const &name, ATarget const &target);

  private:
	std::string _name;
	std::string _title;
	SpellBook _spellBook;

	Warlock(Warlock const &ref);
	Warlock &operator=(Warlock const &ref);
};
