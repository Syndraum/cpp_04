#include "Sorcerer.hpp"
#include "Peon.hpp"
#include "Peasant.hpp"


int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	std::cout << robert << jim << joe;
	robert.polymorph(jim);
	robert.polymorph(joe);

	Peasant cony("Cony");
	std::cout << cony;
	robert.polymorph(cony);
	// Sorcerer impossible;
	return 0;
}