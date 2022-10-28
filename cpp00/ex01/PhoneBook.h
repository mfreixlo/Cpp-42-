#ifndef _PHONEBOOK_H_
#define _PHONEBOOK_H_

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include "Contact.hpp"

std::string truncate(std::string str);
int         read_contact_fields(std::string cont_fields[5]);
int         get_index(int phbook_size);

#endif /* _PHONEBOOK_H_ */
