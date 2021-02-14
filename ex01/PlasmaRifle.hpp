#ifndef PLASMARIFLE
# define PLASMARIFLE

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon
{
public:

	PlasmaRifle(void);
	PlasmaRifle(PlasmaRifle const & src);
	virtual ~PlasmaRifle(void);
	PlasmaRifle &	operator=(PlasmaRifle const &rhs);
	virtual void	attack() const;

private:

};

#endif
