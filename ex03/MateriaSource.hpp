#ifndef MATERIASOURCE
# define MATERIASOURCE

# include "IMateriaSource.hpp"
# define NBR_MATERIA 4

class MateriaSource : public IMateriaSource
{
public:

	MateriaSource(void);
	MateriaSource(MateriaSource const & src);
	~MateriaSource(void);
	MateriaSource &	operator=(MateriaSource const &rhs);

	void learnMateria(AMateria *materia);
	AMateria *createMateria(std::string const &type);

private:
	AMateria * _list[NBR_MATERIA];

	void	deleteMateria();
};

#endif
