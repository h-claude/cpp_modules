/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 19:33:57 by hclaude           #+#    #+#             */
/*   Updated: 2024/12/11 19:51:09 by hclaude          ###   ########.fr       */
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
		std::cout << "Grade too high" << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cout << "Grade too low" << std::endl;
	}
	std::cout << *Pierre << std::endl;
}