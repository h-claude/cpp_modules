/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 13:50:37 by hclaude           #+#    #+#             */
/*   Updated: 2025/05/06 16:11:54 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm(25, 5, "PresidentialPardonForm")
{
	setTarget("default");
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm(25,5, "PresidentialPardonForm")
{
	setTarget(target);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src) : AForm(src)
{
	setTarget(src.getTarget());
}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& src)
{
	if (this == &src)
		return (*this);
	setTarget(src.getTarget());
	return (*this);
}

void	PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	if (!this->getisSigned())
		throw std::runtime_error("The form is not signed.");
	if (executor.getGrade() <= this->getGradeToExecute())
		std::cout << getTarget() << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	else
		throw PresidentialPardonForm::GradeTooLowException();
}