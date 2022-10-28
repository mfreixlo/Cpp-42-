#include "Zombie.hpp"

void randomChump(std::string name)
{
    Zombie *zombie;

    zombie = new_zombie(name);
    zombie->announce();
    delete(zombie);
}