/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 13:22:06 by passunca          #+#    #+#             */
/*   Updated: 2025/04/15 15:53:26 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Warlock {
  public:
	Warlock(std::string const &name, std::string const &title);
	~Warlock();

	std::string getName() const;
	std::string getTitle() const;

	void setTitle(std::string const &title);
	void introduce() const;

  private:
	std::string _name;
	std::string _title;

	Warlock(Warlock const &src);
	Warlock &operator=(Warlock const &ref);
};
