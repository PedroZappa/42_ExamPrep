/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 16:08:24 by passunca          #+#    #+#             */
/*   Updated: 2025/03/31 16:08:48 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"
#include "ASpell.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter") {
}

Polymorph::~Polymorph() {
}

ASpell *Polymorph::clone() const {
	return (new Polymorph());
}


