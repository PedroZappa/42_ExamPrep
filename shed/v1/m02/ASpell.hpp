/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 09:05:21 by passunca          #+#    #+#             */
/*   Updated: 2025/04/16 10:49:31 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "ATarget.hpp"

class ATarget;

class ASpell {
  public:
	ASpell(std::string const &name, std::string const &effects);
	ASpell(ASpell const &ref);
	ASpell &operator=(ASpell const &ref);
	virtual ~ASpell();

	std::string getName() const;
	std::string getEffects() const;

	virtual ASpell *clone() const = 0;

	void launch(ATarget const &target) const;

  protected:
	std::string _name;
	std::string _effects;
};
