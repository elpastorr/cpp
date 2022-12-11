#! /bin/bash

#simple class Builder for improve quality of life


echo "enter class name :"
read st1

hpp_name=$st1.hpp
cpp_name=$st1.cpp
CAPS_NAME=${st1^^}
HPP="_HPP"
CAPS_HPP=$CAPS_NAME$HPP

touch $PWD $cpp_name
touch $PWD $hpp_name

echo "#ifndef $CAPS_HPP
# define $CAPS_HPP

# include <iostream>

class $st1
{
	private:


	public:
		$st1();
		$st1(const $st1 &to_copy);
		~$st1();
		$st1 &operator=(const $st1 &to_copy);
};

// std::ostream &operator<<(std::ostream &o, const $st1 &instance);

#endif" > $hpp_name


echo "#include \"$hpp_name\"

$st1::$st1()
{

}

$st1::$st1(const $st1 &to_copy)
{
	*this = to_copy;
}

$st1::~$st1()
{

}

$st1	&$st1::operator=(const $st1 &to_copy)
{
	return *this;
}
" > $cpp_name
