/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 16:18:31 by hclaude           #+#    #+#             */
/*   Updated: 2025/06/06 17:26:23 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main(void)
{
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);

		try {
			std::cout << "Shortest span: " << sp.shortestSpan() << std::endl;
			std::cout << "Longest span: " << sp.longestSpan() << std::endl;
		} catch (const std::runtime_error &e) {
			std::cerr << e.what() << std::endl;
		}
	}
	{
		try {
			Span sp2 = Span(0);
			sp2.addNumber(1);
		} catch (const std::runtime_error &e) {
			std::cerr << "Error: " << e.what() << std::endl;
		}
	}
	{
		Span sp3 = Span(10);
		sp3.fillSpan();
		std::cout << "Span numbers:" << std::endl;
		for (int i = 0; i < 10; ++i)
		{
			std::cout << sp3[i] << std::endl;
		}
		try {
			std::cout << "Shortest span: " << sp3.shortestSpan() << std::endl;
			std::cout << "Longest span: " << sp3.longestSpan() << std::endl;
		} catch (const std::runtime_error &e) {
			std::cerr << e.what() << std::endl;
		}
	}
}