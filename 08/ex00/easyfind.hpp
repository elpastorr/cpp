#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <algorithm>

template <typename T>
typename T::iterator easyfind(T &container, int to_find)
{
    typename T::iterator iter = std::find(container.begin(), container.end(), to_find);

    if (iter == container.end())
        throw std::invalid_argument("This value is not in this container\n");
    return (iter);
}

#endif