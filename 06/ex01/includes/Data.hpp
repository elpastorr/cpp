#ifndef DATA_HPP
# define DATA_HPP

# include <iostream>

class Data
{
	private:
		int	value;

	public:
		Data();
		Data(const Data &to_copy);
		~Data();
		Data &operator=(const Data &to_copy);

		int	getValue(void) const;
};

#endif
