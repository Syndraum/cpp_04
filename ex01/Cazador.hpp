#ifndef CAZADOR
# define CAZADOR

# include "Enemy.hpp"

class Cazador : public Enemy
{
public:

	Cazador(void);
	Cazador(Cazador const & src);
	virtual ~Cazador(void);
	Cazador &	operator=(Cazador const &rhs);

private:

};

#endif
