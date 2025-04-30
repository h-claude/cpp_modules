/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 14:54:39 by hclaude           #+#    #+#             */
/*   Updated: 2025/04/30 22:33:25 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm(72, 45, "RobotomyRequestForm"), _target("default")
{
}

RobotomyRequestForm::RobotomyRequestForm(const std::string& target) : AForm(72, 45, "RobotomyRequestForm"), _target(target)
{
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& cpy) : AForm(cpy), _target(cpy.getTarget())
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& src)
{
	if (this == &src)
		return (*this);
	_target = src.getTarget();
	return (*this);
}

void	RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
	srand(time(0));
	if (!this->getisSigned())
		throw std::runtime_error("The form is not signed.");
	if (executor.getGrade() <= this->getGradeToExecute())
	{
		std::cout << "*drilling noises*" << std::endl;
		if (rand() % 2)
			std::cout << _target << " has been robotomized successfully." << std::endl;
		else
			std::cout << "Robotomy failed for " << _target << "." << std::endl;
	}
}

std::string	RobotomyRequestForm::getTarget() const
{
	return (_target);
}