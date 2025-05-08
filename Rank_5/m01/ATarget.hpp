/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 08:28:13 by passunca          #+#    #+#             */
/*   Updated: 2025/05/06 08:34:40 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "ASpell.hpp"

class ASpell;

class ATarget {
  public:
	ATarget();
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


