#ifndef _CONTACT_HPP_
#define _CONTACT_HPP_

class   Contact {
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string number;
    std::string darkest_secret; //check if this can only be a string
    public:
        void    new_contact(std::string cont_fields[5]);
        void    print_contact_full(void);
        void    print_contact();
};

#endif /* _CONTACT_HPP_ */
