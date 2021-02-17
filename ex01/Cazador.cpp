#include "Cazador.hpp"

Cazador::Cazador(void) : Enemy(70, "Cazador")
{
	std::cout << "*Bzzzzzz*" << std::endl;
}

Cazador::Cazador(Cazador const & src) : Enemy(70, "Cazador")
{
	*this = src;
}

Cazador::~Cazador(void)
{
	std::cout << "*ZZZZzzzz*" << std::endl;
}

Cazador &	Cazador::operator=(Cazador const & rhs)
{
	Enemy::operator=(rhs);
	return *this;
}
