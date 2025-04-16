/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 11:46:30 by passunca          #+#    #+#             */
/*   Updated: 2025/04/16 11:47:00 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "ASpell.hpp"
#include <iostream>
#include <string>

class Fireball : public ASpell {
  public:
	Fireball();
	~Fireball();

	ASpell *clone() const;
};

