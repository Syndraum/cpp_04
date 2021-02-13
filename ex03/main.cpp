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

	ICharacter* bob = new Character("bob");

	moi->use(0, *bob);
	moi->use(1, *bob);

	delete bob;
	delete moi;

	std::cout << tmp->getType() << std::endl;

	return 0;
}
