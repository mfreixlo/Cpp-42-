#include "Zombie.hpp"

//object pointer stack points to the zombie "stack" created in the heap
// when pointer *stack goes out of scope, its heap objecy remains active
    //We can, for ex. return it from a function without making a copy.

int main()
{
    Zombie zomzom("heap");
    Zombie *stack;

    stack = new_zombie("stack");

    stack->announce();
    zomzom.announce();

    randomChump("random");

    delete(stack);

    return (0);
}