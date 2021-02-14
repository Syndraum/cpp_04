#ifndef SQUAD
# define SQUAD

# include "ISquad.hpp"

struct List
{
	List(ISpaceMarine * unit);

	ISpaceMarine *	_unit;
	List * 			_next;

	List *	end();
};

class Squad: public ISquad
{
public:
	Squad(void);
	Squad(Squad const & src);
	virtual ~Squad(void);
	Squad &	operator=(Squad const &rhs);

	int getCount() const;
	ISpaceMarine* getUnit(int unitId) const;
	int push(ISpaceMarine* unit);
private:
	List * _list;

	bool isInSquad(ISpaceMarine* unit);
	void	delList();
};

#endif
