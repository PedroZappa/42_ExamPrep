/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 15:26:34 by passunca          #+#    #+#             */
/*   Updated: 2025/03/31 16:06:02 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fireball.hpp"
#include "ASpell.hpp"

Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp") {
}

Fireball::~Fireball() {
}

ASpell *Fireball::clone() const {
	return (new Fireball());
}

