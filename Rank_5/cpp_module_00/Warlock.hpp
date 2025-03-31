/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Warlock.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: passunca <passunca@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 08:04:45 by passunca          #+#    #+#             */
/*   Updated: 2025/03/31 08:23:22 by passunca         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <string>

class Warlock {
  public:
	// Constructors
	Warlock(std::string const &name, std::string const &title);
	~Warlock();

	// Getters
	const std::string &getName() const;
	const std::string &getTitle() const;

	// Setter
	void setTitle(std::string const &title);

	// Public Methods
	void introduce() const;

  private:
	std::string _name;
	std::string _title;

	Warlock(Warlock const &);
	Warlock &operator=(Warlock const &);
};

#endif
