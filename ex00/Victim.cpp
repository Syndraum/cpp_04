#include "Victim.hpp"

Victim::Victim(void) : _name("Slave"), _color("33") {}

Victim::Victim(std::string name) : _name(name), _color("33")
{
	std::cout << "A random victim called " << getColorName() << " just appeared!" << std::endl;
}

Victim::Victim(std::string name, std::string color) : _name(name), _color(color)
{
	std::cout << "A random victim called " << getColorName() << " just appeared!" << std::endl;
}

Victim::Victim(Victim const & src)
{
	*this = src;
}

Victim::~Victim(void)
{
	std::cout << "The victim " << getColorName() <<  " died for no apparent reasons!" << std::endl;
}


void	Victim::getPolymorphed() const
{
	std::cout << getColorName() << " was just polymorphed in a cute little sheep!" << std::endl;
}

Victim &	Victim::operator=(Victim const & rhs)
{
	if (this != &rhs){
		_name = rhs._name;
		_color = rhs._color;
	}
	return *this;
}

std::ostream & operator<<(std::ostream & o, Victim const &rhs)
{
	o << "I am " << rhs.getColorName() << ", and i like otters!" << std::endl;
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

std::string Victim::getColorName() const
{
	return "\033[0;" + _color + "m" + _name + "\033[0;37m";
}
