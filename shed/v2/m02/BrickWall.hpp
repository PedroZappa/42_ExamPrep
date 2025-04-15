/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 10:10:08 by passunca          #+#    #+#             */
/*   Updated: 2025/04/15 10:10:32 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "ATarget.hpp"
#include <iostream>
#include <string>

class BrickWall : public ATarget {
  public:
	BrickWall();
	~BrickWall();

	ATarget *clone() const;
};

