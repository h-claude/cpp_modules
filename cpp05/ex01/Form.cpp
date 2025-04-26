/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:44:10 by hclaude           #+#    #+#             */
/*   Updated: 2025/04/26 12:41:23 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Default"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150)
{
}

Form::Form(const Form& cpy) : _name(cpy.getName()), _gradeToSign(cpy.getGradeToSign()), _gradeToExecute(cpy.getGradeToExecute())
{
	if (_gradeToExecute > 150 || _gradeToSign > 150)
	{
		throw Form::GradeTooLowException();
	}
	if (_gradeToExecute < 1 || _gradeToSign < 1)
		throw Form::GradeTooHighException();
	*this = cpy;
}

Form::Form(int gradeToSign, int gradeToExecute, const std::string& name) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (_gradeToExecute > 150 || _gradeToSign > 150)
		throw Form::GradeTooLowException();
	if (_gradeToSign < 1 || _gradeToExecute < 1)
		throw Form::GradeTooHighException();
}

Form::~Form(){}

Form&	Form::operator=(const Form& src)
{
	if (this != &src)
	{
		this->_isSigned = src._isSigned;
	}
	return (*this);
}

void	Form::setIsSigned(const bool isSigned)
{
	_isSigned = isSigned;
}

const std::string	Form::getName() const
{
	return (_name);
}

bool	Form::getisSigned() const
{
	return (_isSigned);
}

int	Form::getGradeToSign() const
{
	return (_gradeToSign);
}

int Form::getGradeToExecute() const
{
	return (_gradeToExecute);
}

void	Form::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > _gradeToSign)
	{
		throw Form::GradeTooLowException();
	}
	else
		_isSigned = true;
}

const	char* Form::GradeTooHighException::what() const throw()
{
	return ("Form grade too high\n");
}

const	char* Form::GradeTooLowException::what() const throw()
{
	return ("Form grade too low\n");
}

std::ostream& operator<<(std::ostream& os, const Form& src)
{
	os << src.getName() << ", form grade to sign " << src.getGradeToSign() << ", grade to execute " << src.getGradeToExecute() << ", is signed " << std::boolalpha << src.getisSigned() << ".";
	return os;
}