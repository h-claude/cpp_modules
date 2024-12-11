/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 19:33:57 by hclaude           #+#    #+#             */
/*   Updated: 2024/12/11 20:05:20 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat* Pierre = 0;
	try
	{
		Pierre = new Bureaucrat("Pierre", 1);
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << *Pierre << std::endl;

	Bureaucrat* Jerome = 0;
	try
	{
		Jerome = new Bureaucrat("Jerome", 150);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << *Jerome << std::endl;

}