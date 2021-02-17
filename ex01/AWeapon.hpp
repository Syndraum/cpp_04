#ifndef AWEAPON
# define AWEAPON

# include <string>
# include <iostream>

class AWeapon
{
protected:
	AWeapon(void);
public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon const & src);
	virtual ~AWeapon(void);
	AWeapon &	operator=(AWeapon const &rhs);

	std::string const &	getName(void) const;
	int	getAPCost(void) const;
	int	setAPCost(int APCost);
	int	getDamage(void) const;
	int	setDamage(int Damage);
	virtual void	attack() const = 0;
	std::string getColorName(void) const;

protected:
	std::string	_name;
	int			_APCost;
	int			_damage;
};

#endif
