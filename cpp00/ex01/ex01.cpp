#include "Contact.hpp"
#include "PhoneBook.hpp"

//reads the contact fields from terminal
void read_contact_fields(std::string cont_fields[5])
{
    std::cout << "first name: ";
    getline(std::cin, cont_fields[0]);
    std::cout << "last name: ";
    getline(std::cin, cont_fields[1]);
    std::cout << "nickname: ";
    getline(std::cin, cont_fields[2]);
    std::cout << "phone number: ";
    getline(std::cin, cont_fields[3]);
    std::cout << "darkest secret: ";
    getline(std::cin, cont_fields[4]);
}

Contact new_contact(std::string cont_fields[5])
{
    Contact new_contact;

    new_contact.first_name = cont_fields[0];
    new_contact.last_name = cont_fields[1];
    new_contact.nickname = cont_fields[2];
    new_contact.number = cont_fields[3];
    new_contact.darkest_secret = cont_fields[4];

    return (new_contact);
}

Contact add_contact(void)
{
    std::string cont_fields[5];
    int i = 0;
    read_contact_fields(cont_fields);
    
}

void search_contact(void)
{
    printf("oioi1\n");
}

int main() {
    PhoneBook my_phbk;  // Create an object of PhoneBook class

    std::string cmd;
    while (cmd.compare("EXIT"))
    {
        std::cout << "Do you want to ADD or SEARCH a contact or EXIT?" << "\n>> ";
        getline(std::cin, cmd);
        if (!cmd.compare("ADD"))
            add_contact();
        else if (!cmd.compare("SEARCH"))
            search_contact();
        else   
            continue;
    }
    return 0;
}