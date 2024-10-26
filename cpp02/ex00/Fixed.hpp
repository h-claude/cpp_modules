/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 19:22:24 by hclaude           #+#    #+#             */
/*   Updated: 2024/10/26 19:37:25 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <String>

class Fixed :
{
	public :

		Fixed();
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private :

		int	value;
	
	
}

#endif