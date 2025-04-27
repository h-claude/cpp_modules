/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 19:33:57 by hclaude           #+#    #+#             */
/*   Updated: 2025/04/27 18:44:56 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat Pierre("Pierre", 1);
		std::cout << Pierre << std::endl;
		Pierre.setGrade(10);
		std::cout << Pierre << std::endl;
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}


	try
	{
		Bureaucrat Jerome("Jerome", 150);
		std::cout << Jerome << std::endl;
		Jerome.decrGrade();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}