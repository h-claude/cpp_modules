/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/11 15:36:22 by hclaude           #+#    #+#             */
/*   Updated: 2025/04/26 15:27:10 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Default name"), _grade(150)
{
}

Bureaucrat::Bureaucrat(const Bureaucrat& src)
{
	*this = src;
}

Bureaucrat::Bureaucrat(const std::string& name, int grade) : _name(name)
{
	this->setGrade(grade);
}

Bureaucrat::~Bureaucrat(){}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& src)
{
	if (this == &src)
		return (*this);
	this->_grade = src._grade;
	return (*this);
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& src)
{
	os << src.getName() << ", bureaucrat grade " << src.getGrade() << ".";
	return os;
}

std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int			Bureaucrat::getGrade() const
{
	return (this->_grade);
}

void		Bureaucrat::setGrade(int grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	_grade = grade;
}

void	Bureaucrat::incrGrade()
{
	this->setGrade(--_grade);
}

void	Bureaucrat::decrGrade()
{
	this->setGrade(++_grade);
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade too high\n");
}

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade too low\n");
}

void Bureaucrat::signForm(AForm& form)
{
	try
	{
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << _name << " couldn't sign " << form.getName() << " because: " << e.what() << std::endl;
		return ;
	}
}
