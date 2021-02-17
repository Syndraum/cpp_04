#include "Character.hpp"

Character::Character(void) : _name("")
{
	for (size_t i = 0; i < NBR_MATERIA; i++)
		_list[i] = 0;
}

Character::Character(std::string const & name) : _name(name)
{
	for (size_t i = 0; i < NBR_MATERIA; i++)
		_list[i] = 0;
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
		if (rhs._list[i] != 0)
			this->_list[i] = rhs._list[i]->clone();
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
// 	return _list[idx];
// }

void		Character::equip(AMateria * m)
{
	size_t i = 0;

	while (i < NBR_MATERIA && _list[i] != 0)
		i++;
	if (i == NBR_MATERIA)
		return ;
	_list[i] = m;
}

void		Character::unequip(int idx)
{
	if (idx < 0 || idx >= NBR_MATERIA)
		return ;
	_list[idx] = 0;
}

void		Character::use(int idx, ICharacter &target)
{
	if (idx < 0 || idx >= NBR_MATERIA)
		return ;
	if (_list[idx] == 0)
		return ;
	_list[idx]->use(target);
}

void		Character::deleteMateria(void)
{
	for (size_t i = 0; i < NBR_MATERIA; i++)
	{
		if (_list[i] != 0)
		{ 
			delete _list[i];
			_list[i] = 0;
		}
	}
}

AMateria *			Character::getMateria(int idx) const
{
	if (idx < 0 || idx > NBR_MATERIA)
		return 0;
	return this->_list[idx];
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