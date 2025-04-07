/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 16:31:22 by passunca          #+#    #+#             */
/*   Updated: 2025/04/02 16:31:23 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ATarget.hpp"
#include <map>

class TargetGenerator {
  public:
	TargetGenerator();
	TargetGenerator(TargetGenerator const &ref);
	TargetGenerator &operator=(TargetGenerator const &ref);
	~TargetGenerator();

	void learnTargetType(ATarget *target);
	void forgetTargetType(std::string const &type);
	void createTarget(std::string const &spellName);

  private:
	std::map<std::string, ATarget *> _targetBook;
};
