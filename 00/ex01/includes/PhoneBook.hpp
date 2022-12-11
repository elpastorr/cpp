#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
    public:
        PhoneBook();
        ~PhoneBook();

        void    add_contact(int i);
        void    del_contact(void);
        void    search(void);
        
    private:
        Contact contacts[9];
};

#endif