#include "Zombie.hpp"

void Zombie::set_name(std::string to_copy)
{
    name = to_copy;
}

Zombie *zombieHorde(int N, std::string name)
{
    Zombie *horde;
    int i;

    horde = new Zombie[N];
    i = 0;
    while (i < N)
    {
        horde[i].set_name(name);
        i++;
    }
    return (horde);
}
