#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"


int main()
{
	ISpaceMarine *bob = new TacticalMarine;
	ISpaceMarine *jim = new AssaultTerminator;
	ISquad *vlc = new Squad;
	std::cout << "Squad count :" << vlc->getCount() << std::endl;
	vlc->push(bob);
	vlc->push(jim);
	std::cout << "Squad count :" << vlc->getCount() << std::endl;
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine *cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;

	Squad * squad = new Squad(); 
	std::cout << "//////// ADD MARINE ////////" << std::endl;
	int i = -1;
	while (++i < 5)
		squad->push(bob->clone());
	std::cout << "Squad count :" << squad->getCount() << std::endl;
	std::cout << "//////// GetUnit ////////" << std::endl;
	std::cout << "Test : -1" << std::endl;
	squad->getUnit(-1);
	std::cout << "Test : 10 (out of list)" << std::endl;
	squad->getUnit(10);
	std::cout << "Test : 1" << std::endl;
	squad->getUnit(1)->battleCry();
	std::cout << "Test : 3" << std::endl;
	squad->getUnit(3)->battleCry();
	std::cout << "//////// Copy ////////" << std::endl;
	Squad copy(*squad);
	std::cout << "//////// delete squad ////////" << std::endl;
	delete squad;
	std::cout << "Copy count :" << copy.getCount() << std::endl;
	return 0;
}