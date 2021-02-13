#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* moi = new Character("moi");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	moi->equip(tmp);
	tmp = src->createMateria("cure");
	moi->equip(tmp);

	Character* bob = new Character("bob");

	moi->use(0, *bob);
	moi->use(1, *bob);

	std::cout << *moi->getMateria(0);
	std::cout << *moi->getMateria(1);

	tmp = src->createMateria("cure");
	bob->equip(tmp);
	tmp = src->createMateria("cure");
	bob->equip(tmp);
	tmp = src->createMateria("ice");
	bob->equip(tmp);
	tmp = src->createMateria("cure");
	bob->equip(tmp);
	tmp = src->createMateria("ice");
	bob->equip(tmp);
	Character copy("copy");
	copy = *bob;

	delete bob;

	std::cout << *copy.getMateria(0);

	delete moi;
	delete src;

	return 0;
}
