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
	TargetGenerator(TargetGenerator const &);
	TargetGenerator &operator=(TargetGenerator const &);
	~TargetGenerator();

	void learnTargetType(ATarget*);
	void forgetTargetType(std::string const &)
	ATarget *createTarget(std::string const &)

private:
	std::map<std::string, ATarget *> _targetBook;
};
