/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BrickWall.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 11:51:14 by passunca          #+#    #+#             */
/*   Updated: 2025/05/04 11:51:34 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "ATarget.hpp"

class BrickWall : public ATarget {
  public:
	BrickWall();
	~BrickWall();

	ATarget *clone() const;
};



