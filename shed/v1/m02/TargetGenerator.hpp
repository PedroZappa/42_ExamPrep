/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/16 14:03:44 by passunca          #+#    #+#             */
/*   Updated: 2025/04/16 14:11:50 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <map>
#include <string>
#include "ATarget.hpp"

class ATarget;

class TargetGenerator {
  public:
	TargetGenerator();
	~TargetGenerator();

	void learnTargetType(ATarget *target);
	void forgetTargetType(std::string const &name);
	void createTarget(std::string const &name);

  private:

	TargetGenerator(TargetGenerator const &ref);
	TargetGenerator&operator=(TargetGenerator const &ref);
};
