/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 08:27:36 by passunca          #+#    #+#             */
/*   Updated: 2025/05/07 08:27:50 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter") {
}
Polymorph::~Polymorph() {
}

ASpell *Polymorph::clone() const {
	return (new Polymorph());
}


