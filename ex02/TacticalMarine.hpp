#ifndef TACTICALMARINE
# define TACTICALMARINE

# include "ISpaceMarine.hpp"
# define BLUE "\033[0;34m"
# define RESET "\033[0;37m"

class TacticalMarine : public ISpaceMarine
{
public:

	TacticalMarine(void);
	TacticalMarine(TacticalMarine const & src);
	~TacticalMarine(void);
	TacticalMarine &	operator=(TacticalMarine const &rhs);

	ISpaceMarine* clone() const;
	void battleCry() const;
	void rangedAttack() const;
	void meleeAttack() const;
private:

};

#endif
