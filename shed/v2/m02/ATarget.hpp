/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 09:42:28 by passunca          #+#    #+#             */
/*   Updated: 2025/04/17 09:50:03 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
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

	void getHitBySpell(ASpell const &ref) const;

  protected:
	std::string _targetType;
};
