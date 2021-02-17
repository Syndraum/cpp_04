#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include "MateriaSource.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	AMateria* tmp = new Ice(); 
	src->learnMateria(tmp);
	delete tmp;
	tmp = new Cure();
	src->learnMateria(tmp);
	delete tmp;

	ICharacter* moi = new Character("moi");

	tmp = src->createMateria("ice");
	moi->equip(tmp);
	tmp = src->createMateria("cure");
	moi->equip(tmp);

	Character* bob = new Character("bob");

	moi->use(0, *bob);
	moi->use(1, *bob);

	std::cout << "\033[0;35m/////// ADDITIONAL TESTS ///////\033[0;37m" << std::endl;
	AMateria* tmp2;
	bob->equip(src->createMateria("cure"));
	tmp2 = src->createMateria("cure");
	bob->equip(tmp2);
	bob->equip(src->createMateria("ice"));
	bob->equip(src->createMateria("cure"));
	tmp = src->createMateria("ice");
	bob->equip(tmp); // Not add
	delete tmp;
	std::cout << *bob;
	std::cout << "\033[0;35m/////// UNEQUIP ///////\033[0;37m" << std::endl;
	bob->unequip(1);
	std::cout << *bob;
	bob->equip(src->createMateria("ice"));
	std::cout << *bob;
	bob->use(0, *moi);
	bob->use(2, *moi);
	std::cout << "\033[0;35m/////// COPY ///////\033[0;37m" << std::endl;
	Character copy("copy");
	copy = *bob;
	std::cout << *bob;

	delete bob;

	std::cout << copy;

	delete moi;
	delete src;
	delete tmp2;

	return 0;
}
