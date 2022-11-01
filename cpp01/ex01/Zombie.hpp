#ifndef _ZOMBIE_HPP_
#define _ZOMBIE_HPP_

#include <iostream>
#include <string>

class Zombie
{
private:
    std::string name;

public:
    Zombie(void); // constructor
    Zombie(std::string name);
    ~Zombie(); // destructor
    void set_name(std::string name);
    void announce(void);
};

Zombie *zombieHorde(int N, std::string name);

#endif /* _ZOMBIE_HPP_ */
