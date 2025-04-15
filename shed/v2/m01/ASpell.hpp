/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 10:06:04 by passunca          #+#    #+#             */
/*   Updated: 2025/04/10 10:10:20 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ATarget.hpp"
#include <iostream>
#include <string>

class ATarget;

class ASpell {
  public:
	ASpell(std::string const &name, std::string const &effects);
	ASpell(ASpell const &ref);
	ASpell &operator=(ASpell const &ref);
	~ASpell();

	std::string getName() const;
	std::string getEffects() const;

	virtual ASpell *clone() const = 0;

	void launch(ATarget const &target) const;

  protected:
	std::string _name;
	std::string _effects;
};
