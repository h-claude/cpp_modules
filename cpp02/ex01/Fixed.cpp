/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 16:54:45 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/02 00:40:06 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int Fixed::_bits = 8;

Fixed::Fixed() : _value(0){
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int value) : _value(value << _bits){
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float value) : _value(roundf(value * (1 << _bits))){
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed& copy){
	std::cout << "Copy constructor called" << std::endl;
	if (this != &copy)
		*this = copy;
}

Fixed&	Fixed::operator=(const Fixed& src)
{
	if (this != &src)
	{
		std::cout << "Copy assignment operator called" << std::endl;
		_value = src._value;
	}
	return *this;
}
Fixed::~Fixed(){
	std::cout << "Destructor called" << std::endl;
}

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


std::ostream& operator<<(std::ostream& os, const Fixed& src)
{
	os << src.toFloat();
	return os;
}
