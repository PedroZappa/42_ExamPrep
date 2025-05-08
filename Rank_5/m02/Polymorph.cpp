/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 09:16:52 by passunca          #+#    #+#             */
/*   Updated: 2025/05/06 09:17:36 by passunca         ###   ########.fr       */
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

