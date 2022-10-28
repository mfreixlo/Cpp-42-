#ifndef A4125A61_568F_4F0B_A100_DC1D991F6AC8
#define A4125A61_568F_4F0B_A100_DC1D991F6AC8
#ifndef _ZOMBIE_HPP_
#define _ZOMBIE_HPP_

#include <iostream>
#include <string>

class   Zombie {
    private:
        std::string name;
    public:
        Zombie(void); //constructor
        Zombie(std::string name); 
        Zombie &operator = (Zombie const);
        ~Zombie(); //destructor        
        void announce( void );
};

Zombie* zombieHorde( int N, std::string name );

#endif /* _ZOMBIE_HPP_ */


#endif /* A4125A61_568F_4F0B_A100_DC1D991F6AC8 */
