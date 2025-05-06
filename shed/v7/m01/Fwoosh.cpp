/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fwoosh.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 08:40:21 by passunca          #+#    #+#             */
/*   Updated: 2025/05/06 08:41:11 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fwoosh.hpp"

Fwoosh::Fwoosh() {
}
Fwoosh::~Fwoosh() {
}

ASpell *Fwoosh::clone() const {
	return (new Fwoosh());
}
