#include "Zombie.hpp"

Zombie *new_zombie(std::string name)
{
    Zombie *zombie;

    zombie = new Zombie(name);

    return (zombie);
}