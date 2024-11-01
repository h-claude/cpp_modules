/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:48:30 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/02 00:26:44 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cmath>

class Fixed
{
	public :

		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed& copy);
		~Fixed();

		void			setRawBits(int const raw);
		int				getRawBits(void) const;
		float			toFloat(void) const;
		int				toInt(void) const;

		Fixed&	operator=(const Fixed& src);

	private :

		int					_value;
		static const int	_bits;

};

std::ostream&	operator<<(std::ostream& os, const Fixed& src);