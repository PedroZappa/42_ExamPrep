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

#include <string>
#include <iostream>

class Warlock {
  public:
	// Constructors
	Warlock(const std::string &name, const std::string &title);
	~Warlock();

	// Getters
	const std::string &getName() const;
	const std::string &getTitle() const;
	
	// Setter
	void setTitle(const std::string &);

	// Public Methods
	void introduce() const;

  private:
	std::string _name;
	std::string _title;

	Warlock(Warlock const &);
	Warlock &operator=(Warlock const &);
};

#endif
