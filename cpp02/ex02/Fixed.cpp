/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:54:45 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/04 03:24:11 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed() : _value(0){}

Fixed::Fixed(const int value) : _value(value << _bits){}

Fixed::Fixed(const float value) : _value(roundf(value * (1 << _bits))){}

Fixed::Fixed(const Fixed& copy){
	if (this != &copy)
		*this = copy;
}

Fixed::Fixed(const int value, bool) : _value(value){}

Fixed::~Fixed(){}

void	Fixed::setRawBits(int const raw)
{
	_value = raw;
}

int		Fixed::getRawBits(void) const
{
	return _value;
}

float	Fixed::toFloat(void) const
{
	return (float)_value / (1 << _bits);
}

int		Fixed::toInt(void) const
{
	return _value >> _bits;
}

Fixed&	Fixed::min(Fixed& a, Fixed& b)
{
	return (a._value < b._value) ? a : b;
}

Fixed&	Fixed::max(Fixed& a, Fixed& b)
{
	return (a._value > b._value) ? a : b;
}

const Fixed&	Fixed::min(const Fixed& a, const Fixed& b)
{
	return (a._value < b._value) ? a : b;
}

const Fixed&	Fixed::max(const Fixed& a, const Fixed& b)
{
	return (a._value > b._value) ? a : b;
}

Fixed&	Fixed::operator=(const Fixed& src)
{
	if (this != &src)
		_value = src._value;
	return *this;
}

std::ostream& operator<<(std::ostream& os, const Fixed& src)
{
	os << src.toFloat();
	return os;
}

bool	Fixed::operator>(const Fixed& src) const
{
	return _value > src._value;
}

bool	Fixed::operator<(const Fixed& src) const
{
	return _value < src._value;
}

bool	Fixed::operator>=(const Fixed& src) const
{
	return _value >= src._value;
}

bool	Fixed::operator<=(const Fixed& src) const
{
	return _value <= src._value;
}

bool	Fixed::operator==(const Fixed& src) const
{
	return _value == src._value;
}

bool	Fixed::operator!=(const Fixed& src) const
{
	return _value != src._value;
}

Fixed	Fixed::operator+(const Fixed& src) const
{
	return Fixed(this->_value + src._value, true);
}

Fixed	Fixed::operator-(const Fixed& src) const
{
	return Fixed(this->_value - src._value, true);
}

Fixed	Fixed::operator*(const Fixed& src) const
{
	return Fixed((this->_value * src._value) >> _bits, true);
}

Fixed	Fixed::operator/(const Fixed& src) const
{
	return Fixed((this->_value << _bits) / src._value, true);
}

Fixed&	Fixed::operator++(void)
{
	_value++;
	return *this;
}

Fixed&	Fixed::operator--(void)
{
	_value--;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed tmp(*this);
	operator++();
	return tmp;
}

Fixed	Fixed::operator--(int)
{
	Fixed tmp(*this);
	operator--();
	return tmp;
}
