/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/08 08:59:37 by passunca          #+#    #+#             */
/*   Updated: 2025/05/08 09:05:05 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "ASpell.hpp"

class Fwoosh : public ASpell {
  public:
	Fwoosh();
	~Fwoosh();

	ASpell *clone() const;
};

