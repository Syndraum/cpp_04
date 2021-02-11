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
		_APCost = rhs._APCost;
		_damage = rhs._damage;
	}
	return *this;
}

std::string	AWeapon::getName(void) const
{
	return this->_name;
}

int		AWeapon::getAPCost(void) const
{
	return this->_APCost;
}

int		AWeapon::setAPCost(int APCost)
{
	this->_APCost = APCost;
	return 0;
}

int		AWeapon::getDamage(void) const
{
	return this->_damage;
}

int		AWeapon::setDamage(int Damage)
{
	this->_damage = Damage;
	return 0;
}


std::string AWeapon::getColorName(void) const
{
	return "\033[0;33m" + _name + "\033[0;37m";
}