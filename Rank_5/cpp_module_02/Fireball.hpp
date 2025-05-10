/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 10:39:34 by passunca          #+#    #+#             */
/*   Updated: 2025/05/08 10:39:53 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once


#include <iostream>
#include <string>
#include "ASpell.hpp"

class Fireball : public ASpell {
  public:
	Fireball();
	~Fireball();

	ASpell *clone() const;
};


