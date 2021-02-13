#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"

int main()
{
	ICharacter* moi = new Character("moi");

	AMateria* tmp = new Ice();
	moi->equip(tmp);
	tmp = new Cure();
	moi->equip(tmp);

	Character* bob = new Character("bob");

	moi->use(0, *bob);
	moi->use(1, *bob);

	std::cout << *moi->getMateria(0);
	std::cout << *moi->getMateria(1);

	tmp = new Cure();
	bob->equip(tmp);
	Character copy("copy");
	copy = *bob;

	delete bob;

	std::cout << *copy.getMateria(0);

	delete moi;

	return 0;
}
