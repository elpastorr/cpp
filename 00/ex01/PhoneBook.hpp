#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    private:
        Contact contacts[8];
    public:
        PhoneBook();
        ~PhoneBook();

        PhoneBook   add_contact(PhoneBook pb, int i);
        PhoneBook   del_contact(PhoneBook pb);
        void    print_pb(PhoneBook pb);
};

#endif