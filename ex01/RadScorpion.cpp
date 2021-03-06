#include "RadScorpion.hpp"

RadScorpion::RadScorpion(void) : Enemy(80, "RadScorpion")
{
	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion(RadScorpion const & src) : Enemy(80, "RadScorpion")
{
	*this = src;
}

RadScorpion::~RadScorpion(void)
{
	std::cout << "* SPROTCH *" << std::endl; 
}

RadScorpion &	RadScorpion::operator=(RadScorpion const & rhs)
{
	Enemy::operator=(rhs);
	return *this;
}
