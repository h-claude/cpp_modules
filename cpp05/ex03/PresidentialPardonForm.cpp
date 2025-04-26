/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 13:50:37 by hclaude           #+#    #+#             */
/*   Updated: 2025/04/26 15:06:44 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm(25, 5, "PresidentialPardonForm"), _target("default")
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string& target) : AForm(25,5, "PresidentialPardonForm")
{
	_target = target;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& src) : AForm(src), _target(src.getTarget())
{
}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& src)
{
	if (this == &src)
		return (*this);
	_target = src.getTarget();
	return (*this);
}

std::string	PresidentialPardonForm::getTarget() const
{
	return (_target);
}

void	PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
	if (!this->getisSigned())
		throw std::runtime_error("The form is not signed.");
	if (executor.getGrade() <= this->getGradeToExecute())
		std::cout << _target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
	else
		throw PresidentialPardonForm::GradeTooLowException();
}