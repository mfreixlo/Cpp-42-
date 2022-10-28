#include "Zombie.hpp"

Zombie::Zombie(std::string new_name)
{
    name = new_name;
}

Zombie::~Zombie()
{
    std::cout << "Destroying ";
    announce();
}

void Zombie::announce(void)
{
    std::cout << name << std::endl;
}