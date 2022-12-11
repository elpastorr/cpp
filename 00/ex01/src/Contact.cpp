#include "Contact.hpp"

Contact::Contact(void)
{
    return ;
}

Contact::~Contact(void)
{
    return ;
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

void    Contact::setFirstName(void)
{
    this->first_name = add_info("First name: ");
}

void    Contact::setLastName(void)
{
    this->last_name = add_info("Last name: ");
}

void    Contact::setNickName(void)
{
    this->nickname = add_info("Nickname: ");
}

void    Contact::setPhone(void)
{
    this->phone_number = add_info("Phone number: ");
}

void    Contact::setSecret(void)
{
    this->secret = add_info("Darkest secret: ");
}

std::string Contact::getFirstName(void)
{
    return this->first_name;
}

std::string Contact::getLastName(void)
{
    return this->last_name;
}

std::string Contact::getNickName(void)
{
    return this->nickname;
}

std::string Contact::getPhone(void)
{
    return this->phone_number;
}

std::string Contact::getSecret(void)
{
    return this->secret;
}
