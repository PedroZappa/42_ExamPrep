/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 08:18:12 by passunca          #+#    #+#             */
/*   Updated: 2025/05/05 08:18:26 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"

Polymorph::Polymorph() : ASpell("Polymorph", "fwooshed") {
}
Polymorph::~Polymorph() {
}

ASpell *Polymorph::clone() const {
	return (new Polymorph());
}


