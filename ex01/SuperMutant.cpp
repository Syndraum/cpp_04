#include "SuperMutant.hpp"

SuperMutant::SuperMutant(void) : Enemy(170, "Super Mutant")
{
	std::cout << "Gaaah. Break everything!" << std::endl;
}

SuperMutant::SuperMutant(SuperMutant const & src) : Enemy(170, "Super Mutant")
{
	*this = src;
}

SuperMutant::~SuperMutant(void)
{
	std::cout << "Aaargh ..." << std::endl;
}

SuperMutant &	SuperMutant::operator=(SuperMutant const & rhs)
{
	Enemy::operator=(rhs);
	return *this;
}

void	SuperMutant::takeDamage(int damage)
{
	Enemy::takeDamage(damage - 3);
}
