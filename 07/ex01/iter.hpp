#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T>
void    iter(T *tab, int size, void (*f)(T &element))
{
    for (int i = 0; i < size; i++)
    {
        (*f)(tab[i]);
    }
}

template <typename T>
void    print(T &element)
{
    std::cout << "[" << element << "] ";
}

template <typename T>
void    increment(T &element)
{
    element++;
}

#endif