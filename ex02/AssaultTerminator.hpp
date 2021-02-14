#ifndef ASSAULTTERMINATOR
# define ASSAULTTERMINATOR

# include "ISpaceMarine.hpp"
# define RED "\033[0;31m"
# define RESET "\033[0;37m"

class AssaultTerminator: public ISpaceMarine
{
public:

	AssaultTerminator(void);
	AssaultTerminator(AssaultTerminator const & src);
	virtual ~AssaultTerminator(void);
	AssaultTerminator &	operator=(AssaultTerminator const &rhs);

	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
private:

};

#endif
