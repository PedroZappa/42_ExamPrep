/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:24:50 by passunca          #+#    #+#             */
/*   Updated: 2025/04/02 16:28:52 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "turned into a critter") {
}

Polymorph::~Polymorph() {}

ASpell *Polymorph::clone() const {
	return (new Polymorph());
}
