#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>
# include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack();
        MutantStack(const MutantStack &to_copy);
        ~MutantStack();
        MutantStack &operator=(const MutantStack<T> &to_copy);

        typedef typename std::stack<T>::container_type::iterator iterator;
        typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;

        iterator    begin(void) { return(std::stack<T>::c.begin()); }
        iterator    end(void) { return(std::stack<T>::c.end()); }

        reverse_iterator    rbegin(void) { return(std::stack<T>::c.rbegin()); }
        reverse_iterator    rend(void) { return(std::stack<T>::c.rend()); }
};

template <typename T> MutantStack<T>::MutantStack()
{
    return ;
}

template <typename T> MutantStack<T>::MutantStack(const MutantStack<T> &to_copy)
{
    *this = to_copy;
}

template <typename T> MutantStack<T>::~MutantStack()
{
    return ;
}

template <typename T> MutantStack<T>    &MutantStack<T>::operator=(const MutantStack &to_copy)
{
    if (*this != to_copy)
        static_cast< std::stack<T> >(*this) = static_cast< std::stack<T> >(to_copy);
    return (*this);
}

#endif