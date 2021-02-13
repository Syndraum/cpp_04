#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice") {}

Ice::Ice(Ice const & src) : AMateria("ice")
{
	*this = src;
}

Ice::~Ice(void)
{
	
}

Ice &	Ice::operator=(Ice const & rhs)
{
	AMateria::operator=(rhs);
	return *this;
}

AMateria *	Ice::clone() const
{
	AMateria * clone = new Ice();
	*clone = *this;
	return clone;
}

void		Ice::use(ICharacter & target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	AMateria::use(target);
}
