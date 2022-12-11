#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class Span
{
	private:
		unsigned int	_N;
		std::vector<int>	vector;

	public:
		Span();
		Span(unsigned int N);
		Span(const Span &to_copy);
		~Span();
		Span &operator=(const Span &to_copy);

		void	addNumber(int n);
	    void	addNumber(int begin, int end, int shortest_span);
		int		shortestSpan();
		int		longestSpan();
		
		class NoSpaceException: public std::exception
		{
			public:
				const char *what() const throw();
		};

		class NoSpanException: public std::exception
		{
			public:
				const char *what() const throw();
		};
};

#endif
