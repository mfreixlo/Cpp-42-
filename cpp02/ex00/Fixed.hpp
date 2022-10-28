#ifndef _FIXED_H_
#define _FIXED_H_

#include <iostream>
#include <string>

class Fixed {
  private:
    int                 value;
    static const int    frac = 8;

  public:
    Fixed (); //constructor
    Fixed (const Fixed&); //copy constructor
    ~Fixed(); //destructor
    Fixed &operator = (Fixed const &to_copy); //overloading assignment operator
    
    int getRawBits(void) const;
    void setRawBits( int const raw );
};


#endif /* _FIXED_H_ */