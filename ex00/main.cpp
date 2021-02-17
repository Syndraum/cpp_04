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

	Victim * cony = new Peasant("Cony");
	std::cout << *cony;
	robert.polymorph(*cony);
	delete cony;
	// Sorcerer impossible;
	return 0;
}