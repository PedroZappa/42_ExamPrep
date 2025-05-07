/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 07:55:21 by passunca          #+#    #+#             */
/*   Updated: 2025/05/07 08:31:05 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ASpell.hpp"
#include "SpellBook.hpp"
#include <iostream>
#include <map>
#include <string>

class Warlock {
  public:
	Warlock();
	Warlock(std::string name, std::string title);
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
