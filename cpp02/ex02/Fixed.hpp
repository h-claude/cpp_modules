/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:48:30 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/04 03:21:44 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	public :

	// Constructors and destructor
		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed& copy);
		~Fixed();

	// Member functions
		void				setRawBits(int const raw);
		int					getRawBits(void) const;
		float				toFloat(void) const;
		int					toInt(void) const;
		static Fixed&		min(Fixed& a, Fixed& b);
		static Fixed&		max(Fixed& a, Fixed& b);
		static const Fixed&	min(const Fixed& a, const Fixed& b);
		static const Fixed&	max(const Fixed& a, const Fixed& b);


	// Operators overload
		Fixed&				operator=(const Fixed& src);

		bool				operator>(const Fixed& src) const;
		bool				operator<(const Fixed& src) const;
		bool				operator>=(const Fixed& src) const;
		bool				operator<=(const Fixed& src) const;
		bool				operator==(const Fixed& src) const;
		bool				operator!=(const Fixed& src) const;
		
		Fixed				operator+(const Fixed& src) const;
		Fixed				operator-(const Fixed& src) const;
		Fixed				operator*(const Fixed& src) const;
		Fixed				operator/(const Fixed& src) const;

		Fixed&				operator++(void); // prefix increment : ++a
		Fixed&				operator--(void); // prefix decrement : --a
		Fixed				operator++(int); // postfix increment : a++
		Fixed				operator--(int); // postfix decrement : a--

	private :

	// private constructor
		Fixed(const int value, bool);
	// Attributes
		int					_value;
		static const int	_bits;

};

std::ostream&	operator<<(std::ostream& os, const Fixed& src);