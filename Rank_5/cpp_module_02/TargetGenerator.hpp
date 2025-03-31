/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TargetGenerator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 17:28:29 by passunca          #+#    #+#             */
/*   Updated: 2025/03/31 17:33:35 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <map>

#include "ATarget.hpp"

class TargetGenerator {
public:
	TargetGenerator();
	TargetGenerator(const TargetGenerator &ref);
	TargetGenerator &operator=(const TargetGenerator &ref);
	~TargetGenerator();

	void learnTargetType(ATarget *target);
	void forgetTargetType(const std::string &type);
	ATarget *createTarget(const std::string &spellName);

private:
	std::map<std::string, ATarget *> _targetBook;
};
