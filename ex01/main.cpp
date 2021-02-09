#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"

int main()
{
	PlasmaRifle plasmaRifle;
	PowerFist	powerFist;
	Enemy		enemy;

	plasmaRifle.attack();
	powerFist.attack();
	enemy.takeDamage(20);

	std::cout << enemy.getType() << std::endl;

	return (0);
}

