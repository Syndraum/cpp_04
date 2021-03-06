#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#define YELLOW "\033[0;33m"
#define GREY "\033[0;35m"

int main()
{
	ISpaceMarine *bob = new TacticalMarine;
	ISpaceMarine *jim = new AssaultTerminator;
	ISquad *vlc = new Squad;
	std::cout << YELLOW << "Squad" << RESET << " count :" << vlc->getCount() << std::endl;
	vlc->push(bob);
	vlc->push(jim);
	std::cout << YELLOW << "Squad" << RESET << " count :" << vlc->getCount() << std::endl;
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine *cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	std::cout << GREY << "//////// ADDITIONAL TESTS ////////" << RESET << std::endl;
	bob = new TacticalMarine;
	Squad * squad = new Squad();
	squad->push(bob);
	int i = -1;
	while (++i < 4)
		squad->push(bob->clone());
	std::cout << YELLOW << "Squad" << RESET << " count :" << squad->getCount() << std::endl;
	std::cout << GREY << "//////// GetUnit ////////" << RESET << std::endl;
	std::cout << "Test : -1" << std::endl;
	squad->getUnit(-1);
	std::cout << "Test : 10 (out of list)" << std::endl;
	squad->getUnit(10);
	std::cout << "Test : 1" << std::endl;
	squad->getUnit(1)->battleCry();
	std::cout << "Test : 3" << std::endl;
	squad->getUnit(3)->battleCry();
	std::cout << GREY << "//////// COPY ////////" << RESET << std::endl;
	Squad copy(*squad);
	std::cout << GREY << "//////// DELETE SQUAD ////////" << RESET << std::endl;
	delete squad;
	std::cout << YELLOW << "Squad" << RESET << " count :" << copy.getCount() << std::endl;
	std::cout << GREY << "//////// ASSIGNATION ////////" << RESET << std::endl;
	jim = new AssaultTerminator;
	Squad * terminaSquad = new Squad();
	terminaSquad->push(jim);
	copy = *terminaSquad;
	std::cout << GREY << "//////// END TEST ////////" << RESET << std::endl;
	delete terminaSquad;
	return 0;
}