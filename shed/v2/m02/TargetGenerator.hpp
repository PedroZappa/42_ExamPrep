/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 11:07:21 by passunca          #+#    #+#             */
/*   Updated: 2025/04/17 11:37:36 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ATarget.hpp"
#include <iostream>
#include <map>
#include <string>

class ATarget;

class TargetGenerator {
  public:
	TargetGenerator();
	~TargetGenerator();

	void learnTargetType(ATarget *spell);
	void forgetTargetType(std::string const &spell);
	ATarget *createTarget(std::string const &spell);

  private:
	std::map<std::string, ATarget *> _targetBook;

	TargetGenerator(TargetGenerator const &ref);
	TargetGenerator &operator=(TargetGenerator const &ref);
};
