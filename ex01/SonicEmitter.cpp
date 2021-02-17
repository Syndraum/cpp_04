#include "SonicEmitter.hpp"

SonicEmitter::SonicEmitter(void) : AWeapon("Sonic emitter", 25, 50) {}

SonicEmitter::SonicEmitter(SonicEmitter const & src) : AWeapon("Sonic emitter", 25, 50)
{
	*this = src;
}

SonicEmitter::~SonicEmitter(void)
{
	
}

SonicEmitter &	SonicEmitter::operator=(SonicEmitter const & rhs)
{
	AWeapon::operator=(rhs);
	return *this;
}

void		SonicEmitter::attack() const
{
	std::cout << "*Boum boum boum*" << std::endl;
}
