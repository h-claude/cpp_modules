/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 14:21:35 by hclaude           #+#    #+#             */
/*   Updated: 2025/04/26 12:05:12 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	public :

		Form();
		Form(const Form& cpy);
		Form(int gradeToSign, int gradeToExecute, const std::string& name);
		~Form();

		Form&		operator=(const Form& src);

		// setter
		void		setIsSigned(const bool isSigned);

		// getter
		const std::string	getName() const;
		bool				getisSigned() const;
		int					getGradeToSign() const;
		int					getGradeToExecute() const;

		// exception
		class GradeTooHighException : public std::exception
		{
			public :
				const char* what() const throw();
		};
		class GradeTooLowException : public std::exception
		{
			public :
				const char* what() const throw();
		};

		void	beSigned(Bureaucrat& bureaucrat);

	private :

		const std::string	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExecute;
};

std::ostream& operator<<(std::ostream& os, const Form& src);