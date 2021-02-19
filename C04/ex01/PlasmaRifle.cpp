#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle(void) : AWeapon("Plasma Rifle", 5, 21)
{
}

PlasmaRifle::PlasmaRifle(const PlasmaRifle &rhs)
{
	*this = rhs;
}

PlasmaRifle::~PlasmaRifle(void)
{
}

PlasmaRifle			&PlasmaRifle::operator=(const PlasmaRifle &rhs)
{
	this->AWeapon::operator=(rhs);
	return (*this);
}

void				PlasmaRifle::attack(void) const
{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}

	/********************************

			GETTER // SETTER

	********************************/
