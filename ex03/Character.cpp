#include "Character.hpp"

Character::Character(void) : _name("")
{
	for (size_t i = 0; i < NBR_MATERIA; i++)
		_inventory[i] = 0;
}

Character::Character(std::string const & name) : _name(name)
{
	for (size_t i = 0; i < NBR_MATERIA; i++)
		_inventory[i] = 0;
}

Character::Character(Character const & src)
{
	*this = src;
}

Character::~Character(void)
{
	deleteMateria();
}

Character &	Character::operator=(Character const & rhs)
{
	this->deleteMateria();
	for (size_t i = 0; i < NBR_MATERIA; i++)
	{
		if (rhs._inventory[i] != 0)
			this->_inventory[i] = rhs._inventory[i]->clone();
	}
	return *this;
}

std::string const & Character::getName() const
{
	return _name;
}

// AMateria * Character::getMateria(int idx) const
// {
// 	if (idx < 0 || idx >= NBR_MATERIA)
// 		return 0;
// 	return _inventory[idx];
// }

void		Character::equip(AMateria * m)
{
	size_t i = 0;

	while (i < NBR_MATERIA && _inventory[i] != 0)
		i++;
	if (i == NBR_MATERIA)
		return ;
	_inventory[i] = m;
}

void		Character::unequip(int idx)
{
	if (idx < 0 || idx >= NBR_MATERIA)
		return ;
	_inventory[idx] = 0;
}

void		Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= NBR_MATERIA)
		return ;
	if (_inventory[idx] == 0)
		return ;
	_inventory[idx]->use(target);
}

void		Character::deleteMateria(void)
{
	for (size_t i = 0; i < NBR_MATERIA; i++)
	{
		if (_inventory[i] != 0)
		{ 
			delete _inventory[i];
			_inventory[i] = 0;
		}
	}
}

AMateria *			Character::getMateria(int idx) const
{
	if (idx < 0 || idx > NBR_MATERIA)
		return 0;
	return this->_inventory[idx];
}

std::ostream & operator<<(std::ostream & o, Character const & character)
{
	AMateria * materia;
	o << "Character name : " << character.getName() << std::endl ;
	for (size_t i = 0; i < NBR_MATERIA; i++){
		materia = character.getMateria(i);
		if (materia != 0)
			o << "\t" << i <<": " << materia->getType() << "\tXP : " << materia->getXP() << std::endl;
	}
	return o;
}