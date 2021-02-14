#ifndef VICTIM
# define VICTIM

# include <string>
# include <iostream>

class Victim
{
public:

	Victim(void);
	Victim(std::string name);
	Victim(Victim const & src);
	virtual ~Victim(void);
	Victim &	operator=(Victim const &rhs);

	virtual void	getPolymorphed() const;

	std::string	getName(void) const;
	int	setName(std::string Name);

protected:
	std::string _name;
};

std::ostream & operator<<(std::ostream & o, Victim const &rhs);

#endif
