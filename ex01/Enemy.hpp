#ifndef ENEMY
# define ENEMY

#include <string>

class Enemy
{
public:

	Enemy(void);
	Enemy(int hp, std::string const & type);
	Enemy(Enemy const & src);
	virtual ~Enemy(void);
	Enemy &	operator=(Enemy const &rhs);

	std::string	getType(void) const;
	int	getHP(void) const;
	int	setHP(int HP);

	virtual void takeDamage(int);
private:
	std::string const	_type;
	int					_HP;
};

#endif
