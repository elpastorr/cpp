#include "Data.hpp"

Data::Data() : value(42)
{
	return ;
}

Data::Data(const Data &to_copy)
{
	*this = to_copy;
}

Data::~Data()
{
	return ;
}

Data	&Data::operator=(const Data &to_copy)
{
	this->value = to_copy.value;
	return *this;
}

int	Data::getValue(void) const
{
	return value;
}
