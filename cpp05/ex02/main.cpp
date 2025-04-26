/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 15:29:22 by hclaude           #+#    #+#             */
/*   Updated: 2025/04/26 15:34:42 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/AForm.hpp"
#include "includes/Bureaucrat.hpp"
#include "includes/PresidentialPardonForm.hpp"
#include "includes/RobotomyRequestForm.hpp"
#include "includes/ShrubberyCreationForm.hpp"

int main()
{
	Bureaucrat	Alain("Alain", 1);
	Bureaucrat	Jerome("Jerome", 1);
	PresidentialPardonForm	form1("form1");
	RobotomyRequestForm		form2("form2");
	ShrubberyCreationForm	form3("form3");

	try
	{
		Alain.signForm(form1);
		form1.execute(Alain);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Jerome.signForm(form2);
		form2.execute(Jerome);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Jerome.signForm(form3);
		form3.execute(Jerome);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}