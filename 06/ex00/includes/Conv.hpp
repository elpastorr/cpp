#ifndef CONV_HPP
# define CONV_HPP

# include <iostream>
# include <limits>
# include <cstdlib>
# include <cerrno>
# include <string>

enum e_type {
	CHAR,
	INT,
	FLOAT,
	DOUBLE,
	INVALID
};

class Conv
{
	private:
		bool	charConv;
		bool	intConv;
		bool	floatConv;
		bool	doubleConv;

		char	charVal;
		long	intVal;
		float	floatVal;
		double	doubleVal;

		int		_isLimit;
		std::string	limit;
		bool	argError;
		bool	outOfRange;

	public:
		Conv();
		Conv(const char *value);
		Conv(const Conv &to_copy);
		~Conv();
		Conv &operator=(const Conv &to_copy);

		bool	isOutOfRange(double value, int type);
		bool	isLimit(const char *value);
		int		getType(const char *value);
		bool	getOutOfRange(void) const;
		bool	getArgError(void) const;

		void	convChar(const char *value);
		void	convInt(std::string value);
		void	convFloat(const char *value);
		void	convDouble(const char *value);

		void	printChar(std::ostream &o) const;
		void	printInt(std::ostream &o) const;
		void	printFloat(std::ostream &o) const;
		void	printDouble(std::ostream &o) const;
};

std::ostream &operator<<(std::ostream &o, const Conv &conv);

#endif
