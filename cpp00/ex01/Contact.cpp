#include "PhoneBook.h"

void    Contact::print_contact(void)
{
    std::cout << "|";
    std::cout.width(10); std::cout << std::right << truncate(first_name);
    std::cout << "|";
    std::cout.width(10); std::cout << std::right << truncate(last_name);
    std::cout << "|";
    std::cout.width(10); std::cout << std::right << truncate(nickname);
    std::cout << "|\n";
}

void    Contact::print_contact_full(void)
{
    std::cout << "first name: " << first_name << '\n';
    std::cout << "last name: " << last_name << '\n';
    std::cout << "nickname: " << nickname << '\n';
    std::cout << "phone number: " << number << '\n';
    std::cout << "darkest secret: " << darkest_secret << "\n\n";
}

void    Contact::new_contact(std::string cont_fields[5])
{
    first_name = cont_fields[0];
    last_name = cont_fields[1];
    nickname = cont_fields[2];
    number = cont_fields[3];
    darkest_secret = cont_fields[4];
}