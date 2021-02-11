#ifndef CHARACTER
# define CHARACTER

#include <string>

#include "AWeapon.hpp"
#include "Enemy.hpp"

class Character
{
	Character(void);
public:
	Character(std::string const & name);
	Character(Character const & src);
	~Character(void);
	Character &	operator=(Character const &rhs);

	std::string	getName(void) const;
	int	getAP(void) const;
	int	setAP(int AP);
	AWeapon	* getWeapon(void) const;
	int setWeapon(AWeapon * wepon);
	std::string	getColorName() const;

	void	recoverAP();
	void	equip(AWeapon * weapon);
	void	attack(Enemy * enemy);
private:
	std::string			_name;
	int					_AP;
	AWeapon *			_weapon;

};

std::ostream & operator<<(std::ostream & o, Character const & character);

#endif
