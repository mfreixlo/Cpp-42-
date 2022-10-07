#include "PhoneBook.h"

std::string truncate(std::string str)
{
    if (str.length() > 9)
        return str.substr(0, 9) + ".";
    return str;
}

//reads the contact fields from terminal
int read_contact_fields(std::string cont_fields[5])
{
    int i = -1;

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
    while (++i < 5)
    {
        if (cont_fields[i].empty())
            return (0);
    }
    return (1);
}

int get_index(int phbook_size)
{
    std::string line;
    int         index;

    getline(std::cin, line);
    try
    {
        index = std::stoi(line);
    }
    catch (std::exception &err)
    {
        std::cout << "That is NOT a valid number...\n\n";
        return (-1);
    }
    if (index > phbook_size || index < 0)
    {
        std::cout << "WRONG INDEX...\n\n";
        return (-1);
    }
    return (index);
}


int main() {
    PhoneBook   my_phbk;
    std::string cmd;

    while (cmd.compare("EXIT"))
    {
        std::cout << "Do you want to ADD/SEARCH a contact or EXIT?" << "\n>> ";
        getline(std::cin, cmd);
        if (!cmd.compare("ADD"))
            my_phbk.add_contact();
        else if (!cmd.compare("SEARCH"))
            my_phbk.print_phonebook();
        else   
            continue;
    }
    return 0;
}