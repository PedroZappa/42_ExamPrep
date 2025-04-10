#include "Warlock.hpp"

Warlock::Warlock(std::string const &name, std::string const &title)
	: _name(name), _title(title) {
	std::cout << this->getName() << ": This looks like another boring day."
			  << std::endl;
}

Warlock::~Warlock() {
	std::cout << this->getName() << ": My job here is done." << std::endl;
}

// Getters
std::string const &Warlock::getName() const {
	return (_name);
}

std::string const &Warlock::getTitle() const {
	return (_title);
}

// Setters
void Warlock::setTitle(std::string const &title) {
	_title = title;
}

void Warlock::introduce() const {
	std::cout << getName() << ": I am " << getName() << ", " << getTitle()
			  << "!" << std::endl;
}
