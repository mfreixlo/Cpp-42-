#include "Zombie.hpp"

int main()
{
    Zombie *horde1;
    Zombie *horde2;
    int N1 = 10;
    int N2 = 5;

    horde1 = zombieHorde(N1, "First");
    horde2 = zombieHorde(N2, "Second");

    for (int i = 0; i < N1; i++)
    {
        std::cout << i + 1 << ":";
        horde1[i].announce();
    }

    for (int i = 0; i < N2; i++)
    {
        std::cout << i + 1 << ":";
        horde2[i].announce();
    }

    delete[](horde1);
    delete[](horde2);

    return (0);
}