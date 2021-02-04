#include "Sorcerer.hpp"

Sorcerer::Sorcerer(void){}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title)
{
	std::cout << _name << ", " << _title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer(Sorcerer const & src)
{
	*this = src;
}


Sorcerer::~Sorcerer(void)
{
	std::cout << _name << ", " << _title << ", is died. Consequence will never be the same !" << std::endl;
}

void	Sorcerer::polymorph(Victim const & victim)
{
	victim.getPolymorphed();
}

std::ostream & operator<<(std::ostream & o, Sorcerer  const &rhs)
{
	o << "I am " << rhs.getName() << ", " << rhs.getTitle() << ", and i like ponies!" << std::endl;
	return o;
}


Sorcerer &	Sorcerer::operator=(Sorcerer const & rhs)
{
	if (this != &rhs){
		_name = rhs._name;
		_title = rhs._title;
	}
	return *this;
}

std::string	Sorcerer::getName(void) const
{
	return this->_name;
}

int		Sorcerer::setName(std::string Name)
{
	this->_name = Name;
	return 0;
}

std::string	Sorcerer::getTitle(void) const
{
	return this->_title;
}

int		Sorcerer::setTitle(std::string Title)
{
	this->_title = Title;
	return 0;
}
