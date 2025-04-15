/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 10:21:25 by passunca          #+#    #+#             */
/*   Updated: 2025/04/10 10:26:38 by passunca         ###   ########.fr       */
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
	ATarget(ATarget const &ref);
	ATarget &operator=(ATarget const &ref);
	~ATarget();

	std::string getType() const;

	virtual ATarget *clone() const = 0;

	void getHitBySpell(ASpell const &spell);

  private:
	std::string _targetType;
};
