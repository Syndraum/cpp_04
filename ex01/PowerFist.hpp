#ifndef POWERFIST
# define POWERFIST

#include "AWeapon.hpp"

class PowerFist : public AWeapon
{
public:

	PowerFist(void);
	PowerFist(PowerFist const & src);
	virtual ~PowerFist(void);
	PowerFist &	operator=(PowerFist const &rhs);
	virtual void	attack() const; 
private:

};

#endif
