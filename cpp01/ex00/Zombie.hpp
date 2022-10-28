#ifndef _ZOMBIE_HPP_
#define _ZOMBIE_HPP_

#include <iostream>
#include <string>

class   Zombie {
    private:
        std::string name;
    public:
        Zombie(std::string name); //contructor
        ~Zombie(); //destructor
        void announce( void );
};

Zombie *new_zombie(std::string name);
void randomChump(std::string name);

#endif /* _ZOMBIE_HPP_ */