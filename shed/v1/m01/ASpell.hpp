/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 09:05:21 by passunca          #+#    #+#             */
/*   Updated: 2025/04/16 09:29:24 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class ASpell {
  public:
	ASpell(std::string const &name, std::string const &effects);
	ASpell(ASpell const &ref);
	ASpell &operator=(ASpell const &ref);
	virtual ~ASpell();

	std::string getName() const;
	std::string getEffects() const;

	virtual ASpell *clone() const = 0;

  private:
	std::string _name;
	std::string _effects;
};
