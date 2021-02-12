#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine(void)
{
	std::cout << "Tactical Marine ready for action !" << std::endl;
}

TacticalMarine::TacticalMarine(TacticalMarine const & src)
{
	*this = src;
}

TacticalMarine::~TacticalMarine(void)
{
	std::cout << "Aaargh ..." << std::endl;
}

TacticalMarine &	TacticalMarine::operator=(TacticalMarine const & rhs)
{
	(void)rhs;
	return *this;
}

ISpaceMarine* TacticalMarine::clone() const
{
	TacticalMarine *clone = new TacticalMarine();
	*clone = *this;
	return clone;
}

void TacticalMarine::battleCry() const
{
	std::cout << "For the Holy PLOT !" << std::endl;
}

void TacticalMarine::rangedAttack() const
{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const
{
	std::cout << "* attacks with a chainsword *" << std::endl;
}