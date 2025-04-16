/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:49:52 by passunca          #+#    #+#             */
/*   Updated: 2025/04/16 11:50:08 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "ASpell.hpp"
#include <iostream>
#include <string>

class Polymorph : public ASpell {
  public:
	Polymorph();
	~Polymorph();

	ASpell *clone() const;
};

