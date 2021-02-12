#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator(void)
{
	std::cout << RED << "* teleports from space *" << RESET << std::endl;
}

AssaultTerminator::AssaultTerminator(AssaultTerminator const & src)
{
	*this = src;
}

AssaultTerminator::~AssaultTerminator(void)
{
	std::cout << RED << "I’ll be back ..." << RESET << std::endl;
}

AssaultTerminator &	AssaultTerminator::operator=(AssaultTerminator const & rhs)
{
	(void)rhs;
	return *this;
}

ISpaceMarine* AssaultTerminator::clone() const
{
	AssaultTerminator *clone = new AssaultTerminator();
	*clone = *this;
	return clone;
}

void AssaultTerminator::battleCry() const
{
	std::cout << RED << "This code is unclean. Purify it !" << RESET << std::endl;
}

void AssaultTerminator::rangedAttack() const
{
	std::cout << RED << "* does nothing *" << RESET << std::endl;
}

void AssaultTerminator::meleeAttack() const
{
	std::cout << RED << "* attaque with chainfists *" << RESET << std::endl;
}