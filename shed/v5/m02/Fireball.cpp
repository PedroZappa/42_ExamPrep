/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fireball.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 11:49:18 by passunca          #+#    #+#             */
/*   Updated: 2025/05/04 11:49:34 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Fireball.hpp"

Fireball::Fireball() : ASpell("Fireball", "burnt to a crisp") {
}
Fireball::~Fireball() {
}

ASpell *Fireball::clone() const {
	return (new Fireball());
}

