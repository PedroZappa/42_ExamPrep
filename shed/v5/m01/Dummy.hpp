/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/04 11:37:38 by passunca          #+#    #+#             */
/*   Updated: 2025/05/04 11:37:53 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include <iostream>
#include <string>
#include "ATarget.hpp"

class Dummy : public ATarget {
  public:
	Dummy();
	~Dummy();

	ATarget *clone() const;
};


