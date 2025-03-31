/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 15:51:50 by passunca          #+#    #+#             */
/*   Updated: 2025/03/31 15:51:53 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include <map>

#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock {
  public:
	// Constructors
	Warlock(const std::string &name, const std::string &title);
	~Warlock();

	// Getters
	const std::string &getName() const;
	const std::string &getTitle() const;
	
	// Setter
	void setTitle(const std::string &);

	// Public Methods
	void introduce() const;
	
	void learnSpell(ASpell *);
	void forgetSpell(std::string);
	void launchSpell(std::string, ATarget const &);

  private:
	std::string _name;
	std::string _title;
	std::map<std::string, ASpell*> _spells;

	Warlock(Warlock const &);
	Warlock &operator=(Warlock const &);
};

