#include "Enemy.hpp"

Enemy::Enemy(void): _type("Skeleton"), _HP(40), _color("31"){}

Enemy::Enemy(int hp, std::string const & type) : _type(type), _HP(hp), _color("31") {}

Enemy::Enemy(Enemy const & src)
{
	*this = src;
}

Enemy::~Enemy(void)
{
	
}

Enemy &	Enemy::operator=(Enemy const & rhs)
{
	if (this != &rhs)
		_HP = rhs._HP;
	return *this;
}

std::string	Enemy::getType(void) const
{
	return this->_type;
}

int		Enemy::getHP(void) const
{
	return this->_HP;
}

int		Enemy::setHP(int HP)
{
	if (HP < 0)
		HP = 0;
	this->_HP = HP;
	return 0;
}

void	Enemy::takeDamage(int damage)
{
	if (damage < 0)
		return;
	setHP( _HP - damage); 
}

std::string Enemy::getColorType() const
{
	return "\033[0;" + _color + "m" + _type + "\033[0;37m";
}

std::ostream & operator<<(std::ostream & o, Enemy const & enemy)
{
	o << "Enemy of type " << enemy.getColorType() << " with " << enemy.getHP() << "HP" << std::endl;
	return o;
}