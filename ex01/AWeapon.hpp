#ifndef AWEAPON
# define AWEAPON

# include <string>

class AWeapon
{
	AWeapon(void);
public:
	AWeapon(std::string const & name, int apcost, int damage);
	AWeapon(AWeapon const & src);
	virtual ~AWeapon(void);
	AWeapon &	operator=(AWeapon const &rhs);
	virtual void	attack() const = 0;

private:
	std::string	_name;
	int			_APCost;
	int			_damage;
};

#endif
