/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 21:18:42 by hclaude           #+#    #+#             */
/*   Updated: 2025/04/27 17:56:17 by hclaude          ###   ########.fr       */
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
	std::map<std::string, AForm* (*)(const std::string&)> formCreators;

	formCreators["PresidentialPardonForm"] = createPresidentialPardonForm;
	formCreators["RobotomyRequestForm"] = createRobotomyRequestForm;
	formCreators["ShrubberyCreationForm"] = createShrubberyCreationForm;

	std::map<std::string, AForm* (*)(const std::string&)>::iterator itMap = formCreators.find(formName);
	if (itMap == formCreators.end())
		throw std::runtime_error("Form " + formName + " doesnt exist.\n");
	else
	{
		std::cout << "Intern creates " << itMap->first << std::endl;
		return (itMap->second(target));
	}
}