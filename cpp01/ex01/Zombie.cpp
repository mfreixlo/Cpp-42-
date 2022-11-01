#include "Zombie.hpp"

Zombie::Zombie(void)
{
    name = "";
}

Zombie::Zombie(std::string new_name)
{
    name = new_name;
}

Zombie::~Zombie()
{
    std::cout << "Destroying ";
    std::cout << name << std::endl;
}

void Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}