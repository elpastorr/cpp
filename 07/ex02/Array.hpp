#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array
{
    private:
        T   *array;
        unsigned int    _size;

    public:
        Array();
        Array(unsigned int n);
        Array(const Array &to_copy);
        ~Array();
        Array &operator=(const Array<T> &to_copy);
        T &operator[](unsigned int index) const;

        unsigned int    size(void) const;

        class OutOfArray : public std::exception
        {
            public:
            const char *what(void) const throw()
            {
                return ("Array: Index out of range !\n");
            }
        };
};

template <typename T>
Array<T>::Array()
{
    _size = 0;
    array = 0;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
    _size = n;
    array = new T[_size];
    for (unsigned int i = 0; i < n; i++)
        array[i] = 0;
}

template <typename T>
Array<T>::Array(const Array<T> &to_copy)
{
    this->_size = to_copy.size();
    array = new T[this->_size];
    for (unsigned int i = 0; i < _size; i++)
    {
        array[i] = to_copy[i];
    }
}

template <typename T>
Array<T> &Array<T>::operator=(const Array<T> &to_copy)
{
    if (this == &to_copy)
        return *this;
    if (this->_size == 0)
    {
        delete this->array;
        this->array = new T();
    }
    else
    {
        delete [] this->array;
        this->_size = to_copy.size();
        this->array = new T[this->_size];
        for (unsigned int i = 0; i < this->_size; i++)
            this->array[i] = to_copy.array[i];
    }
    return *this;
}

template <typename T>
T &Array<T>::operator[](unsigned int index) const
{
    if (index >= _size || index < 0)
        throw OutOfArray();
    return (array[index]);
}

template <typename T>
Array<T>::~Array()
{
    delete [] this->array;
}

template <typename T>
unsigned int    Array<T>::size(void) const
{
    return _size;
}

#endif