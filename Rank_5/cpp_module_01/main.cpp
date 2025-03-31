
#include "Warlock.hpp"
#include "Dummy.hpp"
#include "Fwoosh.hpp"

int main() {
	Warlock richard("Zedro", "the Passunca");
	Dummy bob;
	Fwoosh *fwoosh = new Fwoosh();

	richard.learnSpell(fwoosh);

	richard.introduce();
	richard.launchSpell("Fwoosh", bob);

	richard.forgetSpell("Fwoosh");
	richard.launchSpell("Fwoosh", bob);
}
