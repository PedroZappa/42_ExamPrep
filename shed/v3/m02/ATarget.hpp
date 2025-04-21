/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 09:17:26 by passunca          #+#    #+#             */
/*   Updated: 2025/04/21 12:41:58 by passunca         ###   ########.fr       */
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
	std::string _targetType;
};

