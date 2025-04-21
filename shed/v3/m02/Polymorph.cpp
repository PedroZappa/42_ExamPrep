/*************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Polymorph.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 15:17:22 by passunca          #+#    #+#             */
/*   Updated: 2025/04/21 15:24:24 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Polymorph.hpp"

Polymorph::Polymorph() {}

Polymorph::~Polymorph() {}

ASpell *Polymorph::clone() const {
	return (new Polymorph());
}
