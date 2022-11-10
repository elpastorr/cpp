#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Contact
{
private:
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string darkest_secret;
public:
    Contact();
    ~Contact();

    Contact new_contact(void);
    void    print_info(Contact contact, int i);
    int     is_null(Contact contact);
    void    print_contact(Contact contact);
};

#endif