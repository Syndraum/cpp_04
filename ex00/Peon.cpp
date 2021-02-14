#include "Peon.hpp"

Peon::Peon(void) : Victim() {}

Peon::Peon(std::string name) : Victim(name, "34")
{
	std::cout << "Zog zog." << std::endl;
}

Peon::Peon(Peon const & src)
{
	*this = src;
}

Peon::~Peon(void)
{
	std::cout << "Bleuark..." << std::endl;
}

Peon &	Peon::operator=(Peon const & rhs)
{
	Victim::operator=(rhs);
	return *this;
}

void	Peon::getPolymorphed() const
{
	std::cout << getColorName() << " was just polymorphed in a pink pony!" << std::endl;
}