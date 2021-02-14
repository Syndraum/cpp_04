#ifndef SONICEMITTER
# define SONICEMITTER

# include "AWeapon.hpp"

class SonicEmitter : public AWeapon
{
public:

	SonicEmitter(void);
	SonicEmitter(SonicEmitter const & src);
	virtual ~SonicEmitter(void);
	SonicEmitter &	operator=(SonicEmitter const &rhs);

	void	attack() const;
private:

};

#endif
