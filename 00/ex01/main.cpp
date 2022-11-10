#include "PhoneBook.hpp"

int main()
{
    std::string command;
    PhoneBook pb;
    int     i;

    i = 0;
    while (1)
    {
        std::cout << "Enter command: ";
        std::getline(std::cin, command);
        if (command == "EXIT")
            break ;
        else if (command == "ADD")
        {
            if (i < 8)
                pb = pb.add_contact(pb, i);
            else
            {
                pb = pb.del_contact(pb);
                pb = pb.add_contact(pb, --i);
            }
            i++;
        }
        else if (command == "SEARCH")
            pb.print_pb(pb);
        else
            std::cout << "Command not valid, try again !" << std::endl;
    }
    return (0);
}