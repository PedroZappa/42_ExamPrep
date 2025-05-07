/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 08:03:15 by passunca          #+#    #+#             */
/*   Updated: 2025/05/07 08:15:13 by passunca         ###   ########.fr       */
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
	virtual ~ASpell();

	ASpell(ASpell const &ref);
	ASpell &operator=(ASpell const &ref);

	std::string getName() const;
	std::string getEffects() const;

	virtual ASpell *clone() const = 0;
	void launch(ATarget const &target) const;

  protected:
	std::string _name;
	std::string _effects;
};

