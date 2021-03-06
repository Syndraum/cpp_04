#include "AMateria.hpp"

AMateria::AMateria(void) : _type(""), _xp(0) {}

AMateria::AMateria(std::string const & type) : _type(type), _xp(0) {}

AMateria::AMateria(AMateria const & src)
{
	*this = src;
}

AMateria::~AMateria(void)
{
	
}

AMateria &	AMateria::operator=(AMateria const & rhs)
{
	if (this != &rhs)
		_xp = rhs._xp;
	return *this;
}

unsigned	AMateria::getXP(void) const
{
	return this->_xp;
}

int		AMateria::setXP(unsigned xp)
{
	this->_xp = xp;
	return 0;
}

std::string	const & AMateria::getType(void) const
{
	return this->_type;
}

void		AMateria::use(ICharacter & target)
{
	(void)target;
	setXP(getXP() + 10);
}

std::ostream & operator<<(std::ostream & o, AMateria const & materia)
{
	o << materia.getType() << " materia, XP : " << materia.getXP() << std::endl;
	return o;
}