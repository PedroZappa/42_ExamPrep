/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 12:10:22 by passunca          #+#    #+#             */
/*   Updated: 2025/04/15 12:51:05 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <map>
#include <string>
#include "ATarget.hpp"

class TargetGenerator {
  public:
	TargetGenerator();
	~TargetGenerator();

	void learnTargetType(ATarget *target);
	void forgetTargetType(std::string const &target);
	ATarget *createTarget(std::string const &target);

  private:
	std::map<std::string, ATarget *> _targetBook;

	TargetGenerator(TargetGenerator const &ref);
	TargetGenerator &operator=(TargetGenerator const &ref);
};
