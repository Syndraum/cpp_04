#include "Character.hpp"

Character::Character(void) : _name("Hero"), _AP(40), _weapon(0) {}

Character::Character(std::string const & name) : _name(name), _AP(40), _weapon(0) {}

Character::Character(Character const & src)
{
	*this = src;
}

Character::~Character(void)
{
	
}

Character &	Character::operator=(Character const & rhs)
{
	if (this != &rhs){
		_weapon = rhs._weapon;
	}
	return *this;
}

void		Character::recoverAP()
{
	setAP(_AP + 10);
}

void		Character::equip(AWeapon * weapon)
{
	setWeapon(weapon);
}

void		Character::attack(Enemy * enemy)
{
	if (_weapon == 0)
		return ;
	std::cout << _name << " attack " << enemy->getType() << " with a " << _weapon->getName() << std::endl;
	_weapon->attack();
	setAP(_AP - getWeapon()->getAPCost());
	enemy->takeDamage(getWeapon()->getDamage());
	if (enemy->getHP() == 0)
		enemy->~Enemy();
}

std::string	Character::getName(void) const
{
	return this->_name;
}

int		Character::getAP(void) const
{
	return this->_AP;
}

int		Character::setAP(int AP)
{
	if (AP < 0)
		AP = 0;
	else if (AP > 40)
		AP = 40;
	this->_AP = AP;
	return 0;
}

AWeapon *	Character::getWeapon(void) const
{
	return this->_weapon;
}

int			Character::setWeapon(AWeapon * weapon)
{
	this->_weapon = weapon;
	return 0;
}

std::ostream & operator<<(std::ostream & o, Character const & character)
{
	std::string nameWeapon = "is unarmed";
	if (character.getWeapon() != 0)
		nameWeapon = std::string("carries ") + character.getWeapon()->getName();
	o << character.getName() << " has " << character.getAP() << " AP and " << nameWeapon << std::endl;
	return o;
}
