#include "Conv.hpp"

Conv::Conv() : charConv(false), intConv(false), floatConv(false), doubleConv(false),
		charVal(0), intVal(0), floatVal(0.0f), doubleVal(0.0),
		_isLimit(false), limit(""), argError(false), outOfRange(false)
{
	return ;
}

Conv::Conv(const char *value) : charConv(false), intConv(false), floatConv(false), doubleConv(false),
		charVal(0), intVal(0), floatVal(0.0f), doubleVal(0.0),
		_isLimit(false), limit(""), argError(false), outOfRange(false)
{
	int	type;

	if (isLimit(value))
		return ;
	type = getType(value);
	switch (type)
	{
	case CHAR:
		convChar(value);
		break;
	
	case INT:
		convInt(value);
		break;

	case FLOAT:
		convFloat(value);
		break;

	case DOUBLE:
		convDouble(value);
		break;

	default:
		argError = true;
	
	}
}

Conv::Conv(const Conv &to_copy)
{
	*this = to_copy;
}

Conv::~Conv()
{

}

Conv	&Conv::operator=(const Conv &to_copy)
{
	(void)to_copy;
	return *this;
}

std::ostream &operator<<(std::ostream &o, const Conv &conv)
{
	if (conv.getArgError())
		std::cout << "Error: argument format is invalid" << std::endl;
	else if (conv.getOutOfRange())
		std::cout << "Error: argument value is out of range" << std::endl;
	else
	{
		conv.printChar(o);
		conv.printInt(o);
		conv.printFloat(o);
		conv.printDouble(o);
	}
	return (o);
}

bool	Conv::isOutOfRange(double value, int type)
{
	switch (type)
	{
	case CHAR:
		if (value < 0 || value > 127)
			return (true);
		charConv = true;
		return (false);	

	case INT:
		if (value < -2147483648 || value > 2147483647)
			return (true);
		intConv = true;
		return (false);
	
	case FLOAT:
		if (value < -std::numeric_limits<float>::max() || value > std::numeric_limits<float>::max())
			return (true);
		floatConv = true;
		return (false);
	}
	return (true);
}

bool	Conv::isLimit(const char *value)
{
	const std::string	limits[4] = {"inf", "+inf", "-inf", "nan"};

	for (int i = 0; i < 4; i++)
	{
		if (value == limits[i] || value == (limits[i] + "f"))
		{
			_isLimit = true;
			limit = limits[i];
			floatConv = true;
			doubleConv = true;
			return (true);
		}
	}
	return (false);
}

int		Conv::getType(const char *value)
{
	int	i;
	bool	noDigit = true;
	bool	isInt = true;
	bool	isFloat = false;

	i = 0;
	if (value[0] && value[1] == 0 && (value[0] < '0' || value[0] > '9'))
		return (CHAR);
	if (value[i] == '-' || value[i] == '+')
		i++;
	while (value[i] >= '0' && value[i] <= '9')
	{
		noDigit = false;
		i++;
	}
	if (value[i] == '.')
	{
		isInt = false;
		i++;
		while (value[i] >= '0' && value[i] <= '9')
		{
			noDigit = false;
			i++;
		}
	}
	if (value[i] == 'f')
	{
		isFloat = true;
		i++;
	}
	if (value[i] || noDigit || (isInt && isFloat))
		return (INVALID);
	if (isFloat)
		return (FLOAT);
	if (isInt)
		return (INT);
	return (DOUBLE);
}

bool	Conv::getOutOfRange(void) const
{
	return outOfRange;
}

bool	Conv::getArgError(void) const
{
	return argError;
}

void	Conv::convChar(const char *value)
{
	charVal = value[0];
	if (value[0] >= 0 && value[0] < 127)
		charConv = true;
	intVal = static_cast<int>(charVal);
	intConv = true;
	floatVal = static_cast<float>(charVal);
	floatConv = true;
	doubleVal = static_cast<double>(charVal);
	doubleConv = true;
}

void	Conv::convInt(std::string value)
{

	intVal = std::atol(value.c_str());
	if (intVal < -2147483648 || intVal > 2147483647)
	{
		outOfRange = true;
		return ;
	}
	else
		intConv = true;
	floatVal = static_cast<float>(intVal);
	floatConv = true;
	doubleVal = static_cast<double>(intVal);
	doubleConv = true;
	if (!isOutOfRange(doubleVal, CHAR))
		charVal = static_cast<char>(intVal);
}

void	Conv::convFloat(const char *value)
{
	char	*end = NULL;

	floatVal = std::strtof(value, &end);
	if (value == end)
	{
		argError = true;
		return ;
	}
	if (errno == ERANGE)
	{
		outOfRange = true;
		return ;
	}
	floatConv = true;
	doubleVal = static_cast<double>(floatVal);
	doubleConv = true;
	if (!isOutOfRange(doubleVal, CHAR))
		charVal = static_cast<char>(floatVal);
	if (!isOutOfRange(doubleVal, INT))
		intVal = static_cast<int>(floatVal);

}

void	Conv::convDouble(const char *value)
{
	char	*end = NULL;

	doubleVal = std::strtod(value, &end);
	if (value == end)
	{
		argError = true;
		return ;
	}
	if (errno == ERANGE)
	{
		outOfRange = true;
		return ;
	}
	doubleConv = true;
	if (!isOutOfRange(doubleVal, CHAR))
		charVal = static_cast<char>(doubleVal);
	if (!isOutOfRange(doubleVal, INT))
		intVal = static_cast<int>(doubleVal);
	if (!isOutOfRange(doubleVal, FLOAT))
		floatVal = static_cast<float>(doubleVal);
}

void	Conv::printChar(std::ostream &o) const
{
	o << "Char: ";
	if (!charConv)
		o << "impossible" << std::endl;
	else if (charVal < 32 || charVal > 126)
		o << "non displayable" << std::endl;
	else
		o << "'" << charVal << "'" << std::endl;
	
}

void	Conv::printInt(std::ostream &o) const
{
	o << "Int: ";
	if (!intConv)
		o << "impossible" << std::endl;
	else
		o << intVal << std::endl;
}

void	Conv::printFloat(std::ostream &o) const
{
	o << "Float: ";
	if (!floatConv)
		o << "impossible" << std::endl;
	else if (_isLimit)
		o << limit + "f" << std::endl;
	else
	{
		o.precision(1);
		o << std::fixed << floatVal << "f" << std::endl;
	}
}

void	Conv::printDouble(std::ostream &o) const
{
	o << "Double: ";
	if (!doubleConv)
		o << "impossible" << std::endl;
	else if (_isLimit)
		o << limit << std::endl;
	else
	{
		o.precision(1);
		o << std::fixed << doubleVal << std::endl;
	}
}
