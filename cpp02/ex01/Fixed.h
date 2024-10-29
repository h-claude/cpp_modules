/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/28 17:48:30 by hclaude           #+#    #+#             */
/*   Updated: 2024/10/28 17:55:55 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Fixed
{
	public :

		Fixed();
		Fixed(const int value);
		Fixed(const float value);
		Fixed(const Fixed& copy);
		~Fixed();
		Fixed&	operator=(const Fixed& src);

		void	setRawBits(int const raw);
		int		getRawBits(void) const;
		float	toFloat(void) const;
		int		toInt(void) const;

	private :

		int _value;
		static const int _bits;

};