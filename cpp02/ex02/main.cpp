/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 01:37:22 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/04 03:41:04 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main( void ) {
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;

	std::cout << a << std::endl;
	std::cout << b << std::endl;

	std::cout << Fixed::max( a, b ) << std::endl << std::endl;

	std::cout << "~~~~OTHER TESTS~~~~" << std::endl;

	Fixed c(42);
	Fixed d(21);

	std::boolalpha(std::cout);
	std::cout << std::endl << "c: " << c << std::endl;
	std::cout << "d: " << d << std::endl << std::endl;
	std::cout << "c + d: " << c + d << std::endl;
	std::cout << "c - d: " << c - d << std::endl;
	std::cout << "c * d: " << c * d << std::endl;
	std::cout << "c / d: " << c / d << std::endl << std::endl;
	std::cout << "c > d: " << (c > d) << std::endl;
	std::cout << "c < d: " << (c < d) << std::endl;
	std::cout << "c >= d: " << (c >= d) << std::endl;
	std::cout << "c <= d: " << (c <= d) << std::endl;
	std::cout << "c == d: " << (c == d) << std::endl;
	std::cout << "c != d: " << (c != d) << std::endl << std::endl;
	std::cout << "c++: " << c++ << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "++c: " << ++c << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "c--: " << c-- << std::endl;
	std::cout << "c: " << c << std::endl;
	std::cout << "--c: " << --c << std::endl;
	std::cout << "c: " << c << std::endl << std::endl;
	std::cout << "min(c, d): " << Fixed::min(c, d) << std::endl;
	std::cout << "max(c, d): " << Fixed::max(c, d) << std::endl;
	return 0;
}