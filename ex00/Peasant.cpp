#include "Peasant.hpp"

Peasant::Peasant(void){}

Peasant::Peasant(std::string name) : Victim(name, "32")
{
	std::cout << "Peu-chere !" << std::endl;
}

Peasant::Peasant(Peasant const & src)
{
	*this = src;
}

Peasant::~Peasant(void)
{
	std::cout << "Noooo..." << std::endl;
}

Peasant &	Peasant::operator=(Peasant const & rhs)
{
	Victim::operator=(rhs);
	return *this;
}

void	Peasant::getPolymorphed() const
{
	std::cout << getColorName() << " was just polymorphed in a bat!" << std::endl;
}
