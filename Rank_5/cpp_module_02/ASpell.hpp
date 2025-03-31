/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 10:44:27 by passunca          #+#    #+#             */
/*   Updated: 2025/03/31 12:20:46 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

#include "ATarget.hpp"

class ATarget;

class ASpell {
  public:
	ASpell();
	ASpell(const std::string &name, const std::string &effects);
	virtual ~ASpell();

	ASpell(ASpell const &);
	ASpell &operator=(ASpell const &);

	// Getters
	std::string getName() const;
	std::string getEffects() const;
	// Public Methods
	virtual ASpell *clone() const = 0;
	void launch(ATarget const &) const;

  protected:
	std::string _name;
	std::string _effects;
};
