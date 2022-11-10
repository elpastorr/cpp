#include "Contact.hpp"

Contact::Contact(void)
{
    return ;
}

Contact::~Contact(void)
{
    return ;
}

int     Contact::is_null(Contact contact)
{
    if (contact.first_name.empty())
        return (1);
    return (0);
}

void    Contact::print_info(Contact contact, int i)
{
    std::cout << "|" << std::setw(10) << i << "|";
    if (contact.first_name.size() > 10)
        std::cout << std::string(contact.first_name.begin(), contact.first_name.begin() + 9) << ".|";
    else
        std::cout << std::setw(10) << contact.first_name << "|";
    if (contact.last_name.size() > 10)
        std::cout << std::string(contact.last_name.begin(), contact.last_name.begin() + 9) << ".|";
    else
        std::cout << std::setw(10) << contact.last_name << "|";
    if (contact.nickname.size() > 10)
        std::cout << std::string(contact.nickname.begin(), contact.nickname.begin() + 9) << ".|";
    else
        std::cout << std::setw(10) << contact.nickname << "|" << std::endl;
    std::cout << "|-------------------------------------------|" << std::endl;
}

std::string add_info(std::string msg)
{
    std::string info;

    while (1)
    {
        std::cout << msg;
        std::getline(std::cin, info);
        if (info.empty())
            std::cout << "Empty, not valid. Please try again." << std::endl;
        else
            break ;
    }
    return (info);
}

Contact Contact::new_contact(void)
{
    Contact new_contact;

    new_contact.first_name = add_info("First name: ");
    new_contact.last_name = add_info("Last name: ");
    new_contact.nickname = add_info("Nickname: ");
    new_contact.phone_number = add_info("Phone number: ");
    new_contact.darkest_secret = add_info("Darkest secret: ");
    return (new_contact);
}

void    Contact::print_contact(Contact contact)
{
    std::cout << "First name: " << contact.first_name << std::endl;
    std::cout << "Last name: " << contact.last_name << std::endl;
    std::cout << "Nickname: " << contact.nickname << std::endl;
    std::cout << "Phone number: " << contact.phone_number << std::endl;
    std::cout << "Darkest secret: " << contact.darkest_secret << std::endl;
}
