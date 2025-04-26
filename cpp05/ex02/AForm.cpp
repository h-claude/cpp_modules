/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 15:44:10 by hclaude           #+#    #+#             */
/*   Updated: 2025/04/26 15:32:42 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/AForm.hpp"

AForm::AForm() : _name("Default"), _isSigned(false), _gradeToSign(150), _gradeToExecute(150)
{
}

AForm::AForm(const AForm& cpy) : _name(cpy.getName()), _gradeToSign(cpy.getGradeToSign()), _gradeToExecute(cpy.getGradeToExecute())
{
	if (_gradeToExecute > 150 || _gradeToSign > 150)
	{
		throw AForm::GradeTooLowException();
	}
	if (_gradeToExecute < 1 || _gradeToSign < 1)
		throw AForm::GradeTooHighException();
	*this = cpy;
}

AForm::AForm(int gradeToSign, int gradeToExecute, const std::string& name) : _name(name), _isSigned(false), _gradeToSign(gradeToSign), _gradeToExecute(gradeToExecute)
{
	if (_gradeToExecute > 150 || _gradeToSign > 150)
		throw AForm::GradeTooLowException();
	if (_gradeToSign < 1 || _gradeToExecute < 1)
		throw AForm::GradeTooHighException();
}

AForm::~AForm(){}

AForm&	AForm::operator=(const AForm& src)
{
	if (this != &src)
	{
		this->_isSigned = src._isSigned;
	}
	return (*this);
}

void	AForm::setIsSigned(const bool isSigned)
{
	_isSigned = isSigned;
}

const std::string	AForm::getName() const
{
	return (_name);
}

bool	AForm::getisSigned() const
{
	return (_isSigned);
}

int	AForm::getGradeToSign() const
{
	return (_gradeToSign);
}

int AForm::getGradeToExecute() const
{
	return (_gradeToExecute);
}

void	AForm::beSigned(Bureaucrat& bureaucrat)
{
	if (bureaucrat.getGrade() > _gradeToSign)
	{
		throw AForm::GradeTooLowException();
	}
	else
		_isSigned = true;
}

const	char* AForm::GradeTooHighException::what() const throw()
{
	return ("Form grade too high\n");
}

const	char* AForm::GradeTooLowException::what() const throw()
{
	return ("Form grade too low\n");
}

std::ostream& operator<<(std::ostream& os, const AForm& src)
{
	os << src.getName() << ", form grade to sign " << src.getGradeToSign() << ", grade to execute " << src.getGradeToExecute() << ", is signed " << std::boolalpha << src.getisSigned() << ".";
	return os;
}