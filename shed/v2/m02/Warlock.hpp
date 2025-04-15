/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 09:09:08 by passunca          #+#    #+#             */
/*   Updated: 2025/04/15 09:59:32 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <map>
#include "ASpell.hpp"

class Warlock {
  public:
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
	std::map<std::string, ASpell *> _spellBook;

	Warlock(Warlock const &ref);
	Warlock &operator=(Warlock const &ref);
};
