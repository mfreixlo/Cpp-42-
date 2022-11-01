#ifndef _WEAPON_HPP_
#define _WEAPON_HPP_

#include <iostream>
#include <string>

class Weapon
{
private:
    std::string type;

public:
    Weapon(std::string); // constructor
    ~Weapon();           // destructor
    const std::string &getType(void);
    void setType(std::string);
};

#endif /* _WEAPON_HPP_ */
