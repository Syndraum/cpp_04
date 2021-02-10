#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"


int main()
{
	PlasmaRifle plasmaRifle;
	PowerFist	powerFist;
	SuperMutant	superMutant;
	RadScorpion	radScorpion;

	plasmaRifle.attack();
	powerFist.attack();
	std::cout << superMutant << std::endl;
	superMutant.takeDamage(20);
	std::cout << superMutant << std::endl;
	std::cout << radScorpion << std::endl;
	radScorpion.takeDamage(20);
	std::cout << radScorpion << std::endl;

	return (0);
}

