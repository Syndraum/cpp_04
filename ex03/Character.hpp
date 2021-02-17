#ifndef CHARACTER
# define CHARACTER

# include "ICharacter.hpp"
# include "AMateria.hpp"

# define NBR_MATERIA 4

class Character: public ICharacter
{
	Character(void);
public:


	Character(std::string const & name);
	Character(Character const & src);
	virtual ~Character(void);
	Character &	operator=(Character const &rhs);

	std::string const &getName() const;
	AMateria *			getMateria(int idx) const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
private:
	std::string const	_name;
	AMateria *			_inventory[NBR_MATERIA];

	void deleteMateria(void);
};
std::ostream & operator<<(std::ostream & o, Character const & character);

#endif
