#ifndef VICTIM
# define VICTIM

# include <string>
# include <iostream>

class Victim
{
public:

	Victim(void);
	Victim(std::string name);
	Victim(std::string name, std::string color);
	Victim(Victim const & src);
	virtual ~Victim(void);
	Victim &	operator=(Victim const &rhs);

	virtual void	getPolymorphed() const;

	std::string	getName(void) const;
	int	setName(std::string Name);
	std::string getColorName() const;

protected:
	std::string _name;
	std::string _color;
};

std::ostream & operator<<(std::ostream & o, Victim const &rhs);

#endif
