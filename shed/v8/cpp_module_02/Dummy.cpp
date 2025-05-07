/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/07 08:19:02 by passunca          #+#    #+#             */
/*   Updated: 2025/05/07 08:20:08 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dummy.hpp"

Dummy::Dummy() : ATarget("Target Practice Dummy") {
}
Dummy::~Dummy() {
}

ATarget *Dummy::clone() const {
	return (new Dummy());
}

