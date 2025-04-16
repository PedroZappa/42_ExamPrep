/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ATarget.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 09:31:31 by passunca          #+#    #+#             */
/*   Updated: 2025/04/16 11:07:13 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ASpell.hpp"
#include <iostream>
#include <string>

class ASpell;

class ATarget {
  public:
	ATarget(std::string const &target);
	ATarget(ATarget const &ref);
	ATarget &operator=(ATarget const &ref);
	~ATarget();

	std::string getType() const;

	void getHitBySpell(ASpell const &ref) const;

  protected:
	std::string _targetType;
};
