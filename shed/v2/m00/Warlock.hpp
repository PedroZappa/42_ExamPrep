/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/17 09:16:17 by passunca          #+#    #+#             */
/*   Updated: 2025/04/17 09:23:08 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Warlock {
  public:
	Warlock(std::string name, std::string title);
	
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
