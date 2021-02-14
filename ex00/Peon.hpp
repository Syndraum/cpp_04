#ifndef PEON
# define PEON

# include "Victim.hpp"

class Peon: public Victim
{
public:

	Peon(void);
	Peon(std::string name);
	Peon(Peon const & src);
	virtual ~Peon(void);
	Peon &	operator=(Peon const &rhs);

	virtual void	getPolymorphed() const;
private:

};

#endif
