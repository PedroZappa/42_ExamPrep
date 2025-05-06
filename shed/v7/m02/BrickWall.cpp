/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/06 09:18:12 by passunca          #+#    #+#             */
/*   Updated: 2025/05/06 09:18:21 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BrickWall.hpp"

BrickWall::BrickWall() : ATarget("Target Practice BrickWall") {
}
BrickWall::~BrickWall() {
}

ATarget *BrickWall::clone() const {
	return (new BrickWall());
}


