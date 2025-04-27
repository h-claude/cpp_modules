/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 15:29:22 by hclaude           #+#    #+#             */
/*   Updated: 2025/04/27 19:52:20 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/AForm.hpp"
#include "includes/Bureaucrat.hpp"
#include "includes/PresidentialPardonForm.hpp"
#include "includes/RobotomyRequestForm.hpp"
#include "includes/ShrubberyCreationForm.hpp"

int main()
{
	try
	{
		Bureaucrat	Alain("Alain", 1);
		Bureaucrat	Jerome("Jerome", 1);
		Bureaucrat	truc("truc", 150);
		PresidentialPardonForm	form1("form1");
		RobotomyRequestForm		form2("form2");
		ShrubberyCreationForm	form3("form3");
		PresidentialPardonForm	form4("Macron");

		Alain.signForm(form1);
		form1.execute(Alain);
		Jerome.signForm(form2);
		form2.execute(Jerome);
		Jerome.signForm(form3);
		form3.execute(Jerome);
		Alain.signForm(form4);
		form4.execute(truc);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}