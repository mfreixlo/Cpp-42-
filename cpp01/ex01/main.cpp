#include "Zombie.hpp"

int main()
{
    Zombie *horde;

    horde = zombieHorde(5, "test");

    

    delete(horde);

    return (0);
}