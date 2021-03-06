#ifndef CURE
# define CURE

# include "AMateria.hpp"

class Cure: public AMateria
{
public:

	Cure(void);
	Cure(Cure const & src);
	virtual ~Cure(void);
	Cure &	operator=(Cure const &rhs);

	AMateria * clone() const;
	void use(ICharacter& target);
private:

};

#endif
