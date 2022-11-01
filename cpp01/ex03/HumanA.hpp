#ifndef _HUMANA_HPP_
#define _HUMANA_HPP_

#include "Weapon.hpp"

class HumanA
{
    private:
        std::string name;
        Weapon& weaponA;

    public:
        HumanA(std::string, Weapon&); // constructor
        ~HumanA();    // destructor
        void attack(void);
};

#endif /* _HUMANA_HPP_ */