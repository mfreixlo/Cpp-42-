#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    Zombie *horde;


    horde = new Zombie(name);

    horde->announce();

    return (horde);
}