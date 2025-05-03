/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dummy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/03 10:00:29 by passunca          #+#    #+#             */
/*   Updated: 2025/05/03 10:00:52 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#pragma once

#include "ATarget.hpp"
#include <iostream>
#include <string>

class Dummy : public ATarget {
	Dummy();
	~Dummy();

	ATarget *clone() const;
};

