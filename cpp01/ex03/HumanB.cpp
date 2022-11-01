#include "HumanB.hpp"

HumanB::~HumanB() {}

HumanB::HumanB(std::string new_name) : name(new_name)
{
    ;
}

void HumanB::setWeapon(Weapon &weapon)
{
    weaponB = &weapon;
}

void HumanB::attack(void)
{
    std::cout << name << " attacks with their " << weaponB->getType() << "\n";
}