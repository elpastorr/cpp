#include "Span.hpp"

Span::Span()
{
	_N = 10;
}

Span::Span(unsigned int N)
{
	_N = N;
}

Span::Span(const Span &to_copy)
{
	_N = to_copy._N;
	vector = to_copy.vector;
}

Span::~Span()
{
	return ;
}

Span	&Span::operator=(const Span &to_copy)
{
	_N = to_copy._N;
	vector = to_copy.vector;
	return *this;
}

void	Span::addNumber(int n)
{
	if (_N == vector.size())
		throw NoSpaceException();
	vector.push_back(n);
}

void	Span::addNumber(int begin, int end, int shortest_span)
{
	for (int i = 0; begin < end; i += shortest_span)
	{
		if (_N == vector.size())
			throw NoSpaceException();
		vector.push_back(i);
		begin++;
	}
}

int		Span::shortestSpan()
{
	if (vector.size() < 2)
		throw NoSpanException();
	std::vector<int> tmp = vector;
	std::sort(tmp.begin(), tmp.end());
	int	shortest = tmp[1] - tmp[0];
	for (int i = 0; i < static_cast<int>(tmp.size()) - 1; i++)
	{
		if (shortest > (tmp[i + 1] - tmp[i]))
			shortest = tmp[i + 1] - tmp[i];
	}
	return (shortest);
}

int		Span::longestSpan()
{
	if (vector.size() < 2)
		throw NoSpanException();
	return (*std::max_element(vector.begin(), vector.end()) - *std::min_element(vector.begin(), vector.end()));
}

const char	*Span::NoSpaceException::what() const throw() 
{
	return ("No Space Exception\n");
}

const char	*Span::NoSpanException::what() const throw() 
{
	return ("No Span Exception\n");
}