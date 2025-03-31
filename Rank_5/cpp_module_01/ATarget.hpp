/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 10:53:26 by passunca          #+#    #+#             */
/*   Updated: 2025/03/31 12:26:32 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "ASpell.hpp"

class ASpell;

class ATarget {
  public:
	ATarget();
	ATarget(const std::string &);
	virtual ~ATarget();

	ATarget(ATarget const &);
	ATarget &operator=(ATarget const &);

	// Getters
	const std::string &getType() const;
	// Public Methods
	virtual ATarget *clone() const = 0;
	void getHitBySpell(ASpell const &) const;

  protected:
	std::string _targetType;
};
