/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 08:10:10 by passunca          #+#    #+#             */
/*   Updated: 2025/05/07 08:13:02 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "ASpell.hpp"

class ASpell;

class ATarget {
  public:
	ATarget(std::string const &type);
	virtual ~ATarget();

	ATarget(ATarget const &ref);
	ATarget &operator=(ATarget const &ref);

	std::string getType() const;

	virtual ATarget *clone() const = 0;
	void getHitBySpell(ASpell const &spell) const;

  protected:
	std::string _type;
};


