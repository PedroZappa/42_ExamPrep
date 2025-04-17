/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:04:43 by passunca          #+#    #+#             */
/*   Updated: 2025/04/17 11:05:10 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "ATarget.hpp"
#include <string>
#include <iostream>

class BrickWall : public ATarget {
public:
	BrickWall();
	~BrickWall();

	ATarget *clone() const;
};

