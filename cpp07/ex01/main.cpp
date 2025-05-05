/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:28:01 by hclaude           #+#    #+#             */
/*   Updated: 2025/05/05 17:55:37 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "iter.hpp"

int main()
{
	int tab[] = { 0, 1, 2, 3, 4 };

	std::cout << "Before incrementing the array of integers: ";
	for (int i = 0; i < 5; i++)
		std::cout << tab[i] << " ";
	std::cout << std::endl;

	::iter(tab, 5, ::test);
	std::cout << "After incrementing the array of integers: ";
	for (int i = 0; i < 5; i++)
		std::cout << tab[i] << " ";
		std::cout << std::endl;

	std::string str = "Hello, World!";
	std::cout << "Before incrementing the string: " << str << std::endl;
	::iter(const_cast<char*>(str.c_str()), str.length(), ::test);
	std::cout << "After incrementing the string: " << str << std::endl;

	return (0);
}