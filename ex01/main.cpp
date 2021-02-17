#include "AWeapon.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "SonicEmitter.hpp"
#include "Enemy.hpp"
#include "SuperMutant.hpp"
#include "RadScorpion.hpp"
#include "Cazador.hpp"
#include "Character.hpp"

int main()
{
	Character* moi = new Character("moi");

	std::cout << *moi;
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

	std::cout << "\033[0;35m/////// ADDITIONAL TESTS ///////\033[0;37m" << std::endl;
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

	Cazador * cazador = new Cazador();
	std::cout << *cazador;
	SonicEmitter * sc = new SonicEmitter();
	moi->equip(sc);
	std::cout << *moi;
	moi->attack(cazador);
	moi->recoverAP();
	moi->attack(cazador);
	moi->equip(0);
	moi->attack(cazador);
	moi->equip(pr);
	moi->attack(cazador);

	delete pr;
	delete pf;
	delete sc;
	delete moi;
	return (0);
}

