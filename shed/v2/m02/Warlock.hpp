/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 09:16:17 by passunca          #+#    #+#             */
/*   Updated: 2025/04/17 09:23:08 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <map>
#include "ASpell.hpp"

class Warlock {
  public:
	Warlock(std::string name, std::string title);
	
	~Warlock();

	std::string getName() const;
	std::string getTitle() const;


	void setTitle(std::string const &title);

	void introduce() const;

	void learnSpell(ASpell *spell);
	void forgetSpell(std::string const &spell);
	void launchSpell(std::string const &spell,ATarget &target);


  private:
	std::string _name;
	std::string _title;
	std::map<std::string, ASpell *> _spellBook;


	Warlock(Warlock const &ref);
	Warlock &operator=(Warlock const &ref);
};
