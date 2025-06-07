/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 16:18:34 by hclaude           #+#    #+#             */
/*   Updated: 2025/06/06 17:28:21 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span(void){}

Span::Span(unsigned int N)
{
	if (N <= 0)
		throw std::runtime_error("Span size must be greater than zero.");
	_maxInt = N;
}
Span::Span(const Span &src)
{
	_maxInt = src._maxInt;
	_v = src._v;
}

Span::~Span(void){}

Span&	Span::operator=(const Span &rhs)
{
	if (this != &rhs)
	{
		_maxInt = rhs._maxInt;
		_v = rhs._v;
	}
	return *this;
}

int	Span::operator[](unsigned int index) const
{
	if (index >= _v.size())
		throw std::out_of_range("Index out of range.");
	return _v[index];
}

void	Span::addNumber(int n)
{
	if (_v.size() >= _maxInt)
		throw std::runtime_error("Span is full, cannot add more numbers.");
	_v.push_back(n);
}

int	Span::shortestSpan(void) const
{
	if (_v.size() < 2)
		throw std::runtime_error("Not enough numbers to calculate span.");

	std::vector<int> sorted_v = _v;
	std::sort(sorted_v.begin(), sorted_v.end());

	int min_span = std::numeric_limits<int>::max();
	for (size_t i = 0; i < sorted_v.size() - 1; ++i)
	{
		int span = sorted_v[i + 1] - sorted_v[i];
		if (span < min_span)
			min_span = span;
	}
	return min_span;
}

int	Span::longestSpan(void) const
{
	if (_v.size() < 2)
		throw std::runtime_error("Not enough numbers to calculate span.");

	int min = *std::min_element(_v.begin(), _v.end());
	int max = *std::max_element(_v.begin(), _v.end());
	return max - min;
}

void	Span::fillSpan()
{
	std::srand(time(0));
	if (_v.size() >= _maxInt)
		throw std::runtime_error("Span is full, cannot fill more numbers.");

	for (unsigned int i = 0; i < _maxInt; ++i)
	{
		addNumber(rand() % 100);
	}
}