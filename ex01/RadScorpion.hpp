#ifndef RADSCORPION
# define RADSCORPION

# include "Enemy.hpp"

class RadScorpion : public Enemy
{
public:

	RadScorpion(void);
	RadScorpion(RadScorpion const & src);
	virtual ~RadScorpion(void);
	RadScorpion &	operator=(RadScorpion const &rhs);
private:

};

#endif
