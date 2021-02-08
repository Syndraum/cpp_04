#include "AWeapon.hpp"

AWeapon::AWeapon(void){}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) :
	_name(name), _APCost(apcost), _damage(damage) {}

AWeapon::AWeapon(AWeapon const & src)
{
	*this = src;
}

AWeapon::~AWeapon(void)
{
	
}

AWeapon &	AWeapon::operator=(AWeapon const & rhs)
{
	if (this != &rhs){
		_name = rhs._name;
		_APCost = rhs._APCost;
		_damage = rhs._damage;
	}
	return *this;
}
