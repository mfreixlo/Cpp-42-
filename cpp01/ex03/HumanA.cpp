#include "HumanA.hpp"

HumanA::HumanA(std::string new_name, Weapon &weapon) : name(new_name), weaponA(weapon)
{
    std::cout << "Try to understand this shit\n";
    ;
}

HumanA::~HumanA() {}

void HumanA::attack()
{
    std::cout << name << " attacks with their " << weaponA.getType() << "\n";
}
