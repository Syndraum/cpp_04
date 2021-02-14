#ifndef SORCERER
# define SORCERER

# include <string>
# include <iostream>

# include "Victim.hpp"

class Sorcerer
{
	Sorcerer(void);
public:
	Sorcerer(std::string name, std::string title);
	Sorcerer(Sorcerer const & src);
	~Sorcerer(void);
	Sorcerer &	operator=(Sorcerer const &rhs);

	void	polymorph(Victim const & victim);

	std::string	getName(void) const;
	int	setName(std::string Name);
	std::string	getTitle(void) const;
	int	setTitle(std::string Title);

	std::string getColorName() const;
private:
	std::string	_name;
	std::string _title;

};

std::ostream & operator<<(std::ostream & o, Sorcerer const &rhs);

#endif
