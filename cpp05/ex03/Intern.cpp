/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 21:18:42 by hclaude           #+#    #+#             */
/*   Updated: 2025/04/27 22:08:03 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(const Intern& src)
{
	*this = src;
}

Intern::~Intern()
{
}

Intern& Intern::operator=(const Intern& rhs)
{
	if (this != &rhs)
	{
	}
	return (*this);
}

AForm*	createPresidentialPardonForm(const std::string& target)
{
	return (new PresidentialPardonForm(target));
}

AForm* createRobotomyRequestForm(const std::string& target)
{
	return (new RobotomyRequestForm(target));
}

AForm* createShrubberyCreationForm(const std::string& target)
{
	return (new ShrubberyCreationForm(target));
}

AForm*	Intern::makeForm(const std::string& formName, const std::string& target)
{
	AForm* (*functions[])(const std::string&) = {
		createPresidentialPardonForm,
		createRobotomyRequestForm,
		createShrubberyCreationForm
	};
	std::string formNames[] = {
		"presidential pardon",
		"robotomy request",
		"shrubbery creation"
	};

	for (int i = 0; i < 3; i++)
	{
		if (formNames[i] == formName)
		{
			std::cout << "Intern creates " << formName << std::endl;
			return (functions[i](target));
		}
	}
	std::cerr << "Intern cannot create form: " << formName << std::endl;
	return (0);
}