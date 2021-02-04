#include "Victim.hpp"

Victim::Victim(void){}

Victim::Victim(std::string name) : _name(name)
{
	std::cout << "A random victim called " << _name << " just appeared!" << std::endl;
}

Victim::Victim(Victim const & src)
{
	*this = src;
}

Victim::~Victim(void)
{
	std::cout << "The victim " << _name <<  " died for no apparent reasons!" << std::endl;
}


void	Victim::getPolymorphed() const
{
	std::cout << _name << " was just polymorphed in a cute little sheep!" << std::endl;
}

Victim &	Victim::operator=(Victim const & rhs)
{
	if (this != &rhs)
		_name = rhs._name;
	return *this;
}

std::ostream & operator<<(std::ostream & o, Victim const &rhs)
{
	o << "I am " << rhs.getName() << ", and i like otters!" << std::endl;
	return o;
}

std::string	Victim::getName(void) const
{
	return this->_name;
}

int		Victim::setName(std::string Name)
{
	this->_name = Name;
	return 0;
}
