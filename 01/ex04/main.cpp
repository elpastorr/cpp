#include <iostream>
#include <string>
#include <fstream>

std::string newName(std::string original_file)
{
    std::string::iterator i;
    std::string new_file;

    i = original_file.end();
    while (i != original_file.begin() && *i != '.')
        i--;
    if (i == original_file.begin())
        return (original_file + ".replace");
    new_file.insert(new_file.end(), original_file.begin(), i);
    return (new_file + ".replace");
}

std::string replace(std::string file, std::string find, std::string replace)
{
    int i;

    i = 0;
    while (file.find(find, i) != std::string::npos)
    {
        i = file.find(find, i);
        file.erase(i, find.size());
        file.insert(i, replace);
        i+= replace.size();
    }
    return (file);
}

void    newFile(std::string new_file, std::string old_file, char **av)
{
    std::ifstream   src_file;
    std::ofstream   dst_file;
    std::string     line;
    std::string     file;

    src_file.open(old_file.c_str());
    if (src_file)
    {
        dst_file.open(new_file.c_str());
        while (getline(src_file, line))
        {
            line.append("\n");
            file.append(line);
        }
        dst_file << replace(file, av[2], av[3]);
        src_file.close();
        dst_file.close();
    }
    else
        std::cout << "File not found.." << std::endl;
}

int main(int ac, char **av)
{
    if (ac == 4)
    {
        if (av[1] && av[2] && av[3] && av[2][0] != 0)
            newFile(newName(av[1]), av[1], av);
        else
            std::cout << "Error, argument format incorrect.." << std::endl;
    }
    else
        std::cout << "Error, argument number incorrect.." << std::endl;
    return (0);
}
