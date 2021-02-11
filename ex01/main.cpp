#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Character.hpp"

int main()
{
	Character* moi = new Character("moi");

	std::cout << *moi;\
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	moi->equip(pr);
	std::cout << *moi;
	moi->equip(pf);

	moi->attack(b);
	std::cout << *moi;
	moi->equip(pr);
	std::cout << *moi;
	moi->attack(b);
	std::cout << *moi;
	moi->attack(b);
	std::cout << *moi;

	SuperMutant *	superMutant = new SuperMutant();
	std::cout << *superMutant;

	std::cout << *moi;
	moi->attack(superMutant);
	std::cout << *superMutant << *moi;
	moi->equip(pf);
	moi->attack(superMutant);
	moi->attack(superMutant);
	std::cout << *superMutant << *moi;
	moi->recoverAP();
	std::cout << *moi;
	moi->recoverAP();
	moi->recoverAP();
	moi->recoverAP();
	std::cout << *moi;
	moi->attack(superMutant);
	std::cout << *superMutant << *moi;
	moi->attack(superMutant);
	moi->attack(superMutant);

	delete pr;
	delete pf;
	return (0);
}

