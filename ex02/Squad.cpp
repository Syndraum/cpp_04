#include "Squad.hpp"

Squad::Squad(void) : _list(0) {}

Squad::Squad(Squad const & src)
{
	*this = src;
}

Squad::~Squad(void)
{
	List *cursor = this->_list;
	List *prec;

	while (cursor !=0)
	{
		prec = cursor;
		cursor = cursor->_next;
		delete prec;
	}
}

Squad &	Squad::operator=(Squad const & rhs)
{
	if (this != &rhs)
		this->_list = rhs._list;
	return *this;
}

int		Squad::getCount() const
{
	int count = 0;
	List *cursor = this->_list;

	while(cursor != 0)
	{
		cursor = cursor->_next;
		count++;
	}
	return count;
}

ISpaceMarine * Squad::getUnit(int unitId) const
{
	List *cursor = this->_list;
	int i = -1;

	if (unitId < 0 || unitId >= getCount())
		return 0;
	while(++i < unitId)
		cursor = cursor->_next;
	return cursor->_unit;
}

int				Squad::push(ISpaceMarine* unit)
{
	if (unit == 0)
		return -1;
	if (isInSquad(unit))
		return -2;
	List * node = new List(unit);
	if (_list == 0)
		_list = node;
	else
		_list->end()->_next = node;
	// delete node;
	return 0;
}

bool			Squad::isInSquad(ISpaceMarine * unit)
{
	List *cursor = this->_list;

	if (unit == 0)
		return false;
	while (cursor != 0)
	{
		if (cursor->_unit == unit)
			return true;
		cursor = cursor->_next;
	}
	return false;
}

List::List(ISpaceMarine * unit) : _unit(unit), _next(0) {}

List *List::end()
{
	List * cursor = this;
	while (cursor->_next != 0)
		cursor = cursor->_next;
	return cursor;
}