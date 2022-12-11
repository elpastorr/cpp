#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <string>
# include <iomanip>

class Contact
{
public:

    Contact();
    ~Contact();

    void    setFirstName(void);
    void    setLastName(void);
    void    setNickName(void);
    void    setPhone(void);
    void    setSecret(void);

    std::string getFirstName(void);
    std::string getLastName(void);
    std::string getNickName(void);
    std::string getPhone(void);
    std::string getSecret(void);

private:

    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string phone_number;
    std::string secret;
};

#endif