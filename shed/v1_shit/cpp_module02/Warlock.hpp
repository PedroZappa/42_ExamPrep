#pragma once

#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"
#include <iostream>
#include <map>
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

	void learnSpell(ASpell *spell);
	void forgetSpell(const std::string spell);
	void launchSpell(const std::string spell, ATarget const &target);

  private:
	std::string _name;
	std::string _title;
	SpellBook _spellBook;

	Warlock();
	Warlock(Warlock const &ref);
	Warlock &operator=(Warlock const &ref);
};
