#ifndef AMATERIA
# define AMATERIA

# include <string>
# include <iostream>
# include "ICharacter.hpp"

class AMateria
{
protected:
	AMateria(void);
public:

	AMateria(std::string const & type);
	AMateria(AMateria const & src);
	virtual ~AMateria(void);
	AMateria &	operator=(AMateria const &rhs);

	std::string	const & getType(void) const;
	unsigned int getXP(void) const;
	int	setXP(unsigned Int);

	virtual AMateria * clone() const = 0;
	virtual void use(ICharacter& target);
private:
	std::string const  _type;
	unsigned int _xp;
};
std::ostream & operator<<(std::ostream & o, AMateria const & materia);

#endif
