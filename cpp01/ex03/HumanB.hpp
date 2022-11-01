#ifndef _HUMANB_HPP_
#define _HUMANB_HPP_

#include "Weapon.hpp"

class HumanB
{
private:
    std::string name;
    Weapon *weaponB;

public:
    HumanB(std::string); // constructor
    ~HumanB();           // destructor
    void setWeapon(Weapon &weaponB);
    void attack(void);
};

#endif /* _HUMANB_HPP_ */