#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main()
{
	PlasmaRifle plasmaRifle;
	PowerFist	powerFist;
	SuperMutant	superMutant;
	std::cout << superMutant << std::endl;
	RadScorpion	radScorpion;
	std::cout << radScorpion << std::endl;
	Character	hero("Frank");

	std::cout << hero <<std::endl;
	hero.attack(&radScorpion);
	hero.equip(&plasmaRifle);
	std::cout << hero <<std::endl;
	hero.attack(&radScorpion);
	std::cout << radScorpion << std::endl << hero <<std::endl;
	

	return (0);
}

