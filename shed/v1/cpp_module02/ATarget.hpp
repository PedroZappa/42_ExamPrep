/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 10:52:02 by passunca          #+#    #+#             */
/*   Updated: 2025/04/02 16:14:18 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ASpell.hpp"
#include <iostream>
#include <string>

class ASpell;

class ATarget {
  public:
	ATarget();
	ATarget(std::string const &targetType);
	virtual ~ATarget();

	ATarget(ATarget const &ref);
	ATarget &operator=(ATarget const &ref);

	std::string const &getType() const;

	void getHitBySpell(ASpell const &spell) const;

	virtual ATarget *clone() const = 0;

  protected:
	std::string _targetType;
};
