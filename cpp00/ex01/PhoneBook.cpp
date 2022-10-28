#include "PhoneBook.h"  

void    PhoneBook::add_contact(void)
{
    std::string cont_fields[5];
    int         correct_contact;

    correct_contact = read_contact_fields(cont_fields);
    if (!correct_contact)
        std::cout << "!Contacts can't have empty fields!\n\n";
    if (size == 8)
        size = 0;
    contacts[size].new_contact(cont_fields);
    size += 1;
}

void    PhoneBook::print_phonebook(void)
{
    int         index = -1;
    std::string line;

    while (++index < size)
    {
        std::cout << "|";
        std::cout.width(10); std::cout << std::right << index + 1;
        contacts[index].print_contact();
    }
    std::cout << "\n Which contact do you want to display? ";
    index = get_index(size);
    if (index != -1)
        contacts[index - 1].print_contact_full();
}