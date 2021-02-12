#ifndef ASSAULTTERMINATOR
# define ASSAULTTERMINATOR

# include "ISpaceMarine.hpp"

class AssaultTerminator: public ISpaceMarine
{
public:

	AssaultTerminator(void);
	AssaultTerminator(AssaultTerminator const & src);
	~AssaultTerminator(void);
	AssaultTerminator &	operator=(AssaultTerminator const &rhs);

	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
private:

};

#endif
