#pragma once

#include <iostream>
#include <string>

class Warlock {
  public:
	Warlock(std::string const &name, std::string const &title);
	~Warlock();

	// Getters
	std::string const &getName() const;
	std::string const &getTitle() const;

	// Setters
	void setTitle(std::string const &title);

	void introduce() const;

  private:
	std::string _name;
	std::string _title;

	Warlock();
	Warlock(Warlock const &ref);
	Warlock &operator=(Warlock const &ref);
};
