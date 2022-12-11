#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    return ;
}

PhoneBook::~PhoneBook(void)
{
    return ;
}

int     is_null(Contact contact)
{
    if (contact.getFirstName().empty())
        return (1);
    return (0);
}

void   PhoneBook::del_contact(void)
{
    int i;

    i = 0;
    while (i < 7)
    {
        this->contacts[i] = this->contacts[i + 1];
        i++;
    }
}

void   PhoneBook::add_contact(int i)
{
    Contact contact;
    
    contact.setFirstName();
    contact.setLastName();
    contact.setNickName();
    contact.setPhone();
    contact.setSecret();
    this->contacts[i] = contact;
}

void    print_info(Contact contact, int i)
{
    std::cout << "|" << std::setw(10) << i << "|";
    if (contact.getFirstName().size() > 9)
        std::cout << contact.getFirstName().substr(0, 9) << ".|";
    else
        std::cout << std::setw(10) << contact.getFirstName() << "|";
    if (contact.getLastName().size() > 9)
        std::cout << contact.getLastName().substr(0, 9) << ".|";
    else
        std::cout << std::setw(10) << contact.getLastName() << "|";
    if (contact.getNickName().size() > 9)
        std::cout << contact.getNickName().substr(0, 9) << ".|" << std::endl;
    else
        std::cout << std::setw(10) << contact.getNickName() << "|" << std::endl;
    std::cout << "|-------------------------------------------|" << std::endl;
}

void    print_contact(Contact *contact)
{
    std::cout << "First name: " << contact->getFirstName() << std::endl;
    std::cout << "Last name: " << contact->getLastName() << std::endl;
    std::cout << "Nickname: " << contact->getNickName() << std::endl;
    std::cout << "Phone number: " << contact->getPhone() << std::endl;
    std::cout << "Darkest secret: " << contact->getSecret() << std::endl;
}

int valid_index(char c, int max)
{
    if (((int)c - 48) >= 0 && ((int)c - 48) < max)
        return (1);
    return (0);
}

void    PhoneBook::search(void)
{
    int i;
    std::string index;

    i = 0;
    if (is_null(this->contacts[0]))
        std::cout << "PhoneBook empty !" << std::endl;
    else
    {
        std::cout << "|-------------------------------------------|" << std::endl;
        std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
        std::cout << "|-------------------------------------------|" << std::endl;
        while (!is_null(this->contacts[i]))
        {
            print_info(this->contacts[i], i);
            i++;
        }
    }
    while (1)
    {
        std::cout << "Select Index for more info: ";
        getline(std::cin, index);
        if (index[0] && !index[1] && valid_index(index[0], i))
        {
            i = (int)index[0] - 48;
            print_contact(&this->contacts[i]);
            break ;
        }
        else
            std::cout << "Index not valid, try again !" << std::endl;
    }
}
