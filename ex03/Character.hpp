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
	~Character(void);
	Character &	operator=(Character const &rhs);

	std::string const &getName() const;
	void equip(AMateria *m);
	void unequip(int idx);
	void use(int idx, ICharacter &target);
private:
	std::string const	_name;
	AMateria *			_list[NBR_MATERIA];

	void deleteMateria(void);
};

#endif
