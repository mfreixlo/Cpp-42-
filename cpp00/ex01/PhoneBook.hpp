#ifndef _PHONEBOOK_HPP
#define _PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook {
  private:
    Contact contacts[8];
    int     size;
  public:
    PhoneBook() : size(0) {}
    void  add_contact(void);
    void  print_phonebook(void);
};


#endif /* _PHONEBOOK_HPP */
