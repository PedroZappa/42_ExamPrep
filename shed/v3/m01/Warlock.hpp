/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/21 09:04:01 by passunca          #+#    #+#             */
/*   Updated: 2025/04/21 09:09:57 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Warlock {
  public:
	Warlock();
	Warlock(std::string const &name, std::string const &title);
	~Warlock();

	std::string getName() const;
	std::string getTitle() const;
	
	void setTitle(std::string const &title);

	void introduce() const;

  private:
	std::string _name;
	std::string _title;

	Warlock(Warlock const &ref);
	Warlock &operator=(Warlock const &ref);
};
