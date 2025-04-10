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

void Warlock::learnSpell(ASpell *spell) {
	std::map<std::string, ASpell *>::iterator it =
		_spellBook.find(spell->getName());
	if (it == _spellBook.end())
		_spellBook[spell->getName()] = spell->clone();
}

void Warlock::forgetSpell(const std::string spell) {
	std::map<std::string, ASpell *>::iterator it =
		_spellBook.find(spell);
	if (it != _spellBook.end()) {
		delete it->second;
		_spellBook.erase(it);
	}
}

void Warlock::launchSpell(const std::string spell, ATarget const &target) {
	std::map<std::string, ASpell *>::iterator it =
		_spellBook.find(spell);
	if ( it != _spellBook.end())
		it->second->launch(target);
}
