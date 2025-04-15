/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ASpell.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 16:40:41 by passunca          #+#    #+#             */
/*   Updated: 2025/04/15 18:17:28 by passunca         ###   ########.fr       */
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
	virtual ~ASpell();

	ASpell(ASpell const &);
	ASpell &operator=(ASpell const &ref);

	std::string const &getName() const;
	std::string const &getEffects() const;

	virtual ASpell *clone() const = 0;

	void launch(ATarget const &target) const;

  private:
	std::string _name;
	std::string _effects;
};
