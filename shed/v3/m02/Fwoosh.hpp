/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 09:36:37 by passunca          #+#    #+#             */
/*   Updated: 2025/04/21 09:39:07 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ASpell.hpp"
#include <iostream>
#include <string>

class Fwoosh : public ASpell {
  public:
	Fwoosh();
	~Fwoosh();

	ASpell *clone() const;
};
