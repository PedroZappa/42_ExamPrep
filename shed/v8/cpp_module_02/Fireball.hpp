/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 08:26:09 by passunca          #+#    #+#             */
/*   Updated: 2025/05/07 08:26:19 by passunca         ###   ########.fr       */
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


