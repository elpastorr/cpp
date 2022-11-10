#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
    return ;
}

PhoneBook::~PhoneBook(void)
{
    return ;
}

PhoneBook   PhoneBook::del_contact(PhoneBook pb)
{
    int i;

    i = 0;
    while (i < 7)
    {
        pb.contacts[i] = pb.contacts[i + 1];
        i++;
    }
    return (pb);
}

PhoneBook   PhoneBook::add_contact(PhoneBook pb, int i)
{
    pb.contacts[i] = pb.contacts[i].new_contact();
    return (pb);
}

void    PhoneBook::print_pb(PhoneBook pb)
{
    int i;

    i = 0;
    if (pb.contacts[0].is_null(pb.contacts[0]))
        std::cout << "PhoneBook empty !" << std::endl;
    else
    {
        std::cout << "|-------------------------------------------|" << std::endl;
        std::cout << "|     Index|First name| Last name|  Nickname|" << std::endl;
        std::cout << "|-------------------------------------------|" << std::endl;
        while (pb.contacts[i].is_null(pb.contacts[i]))
            pb.contacts[i].print_info(pb.contacts[i++], i);
    }
}
