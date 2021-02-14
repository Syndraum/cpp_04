#ifndef PEASANT
# define PEASANT

# include "Victim.hpp"

class Peasant : public Victim
{
public:

	Peasant(void);
	Peasant(std::string name);
	Peasant(Peasant const & src);
	virtual ~Peasant(void);
	Peasant &	operator=(Peasant const &rhs);

	virtual void	getPolymorphed() const;
private:

};

#endif
