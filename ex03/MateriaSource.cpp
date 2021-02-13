#include "MateriaSource.hpp"

MateriaSource::MateriaSource(void)
{
	for (size_t i = 0; i < NBR_MATERIA; i++)
		_list[i] = 0;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
	for (size_t i = 0; i < NBR_MATERIA; i++)
		_list[i] = 0;
	*this = src;
}

MateriaSource::~MateriaSource(void)
{
	deleteMateria();
}

MateriaSource &	MateriaSource::operator=(MateriaSource const & rhs)
{
	deleteMateria();
	for (size_t i = 0; i < NBR_MATERIA; i++)
	{
		if (rhs._list[i] != 0)
			this->_list[i] = rhs._list[i]->clone();
	}
	return *this;
}

void	MateriaSource::learnMateria(AMateria *materia)
{
	int i = 0;

	while (i < NBR_MATERIA && _list[i] != 0)
		i++;
	if (i == NBR_MATERIA)
		return ;
	_list[i] = materia->clone();
}

AMateria *MateriaSource::createMateria(std::string const &type)
{
	int i = 0;

	while (i < NBR_MATERIA && _list[i] != 0)
	{
		if (_list[i]->getType() == type)
			return _list[i]->clone();
		i++;
	}
	return 0;
}

void	MateriaSource::deleteMateria()
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