#include "Cure.hpp"

Cure::Cure(void) : AMateria("cure") {}

Cure::Cure(Cure const & src) : AMateria("cure")
{
	*this = src;
}

Cure::~Cure(void)
{
	
}

Cure &	Cure::operator=(Cure const & rhs)
{
	AMateria::operator=(rhs);
	return *this;
}

AMateria *	Cure::clone() const
{
	AMateria * clone = new Cure();
	*clone = *this;
	return clone;
}

void		Cure::use(ICharacter & target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
	AMateria::use(target);
}
