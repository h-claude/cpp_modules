/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:36:57 by hclaude           #+#    #+#             */
/*   Updated: 2025/04/26 12:04:59 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include "Form.hpp"

class Form;

class Bureaucrat
{
	public :

		Bureaucrat();
		Bureaucrat(const Bureaucrat& cpy);
		Bureaucrat(const std::string& name, int grade);
		~Bureaucrat();

		Bureaucrat&	operator=(const Bureaucrat& src);

		std::string	getName() const;
		int			getGrade() const;

		void		setGrade(int grade);

		void		incrGrade();
		void		decrGrade();

		void		signForm(Form& form);

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

	private :

		const std::string	_name;
		int					_grade;

} ;

std::ostream& operator<<(std::ostream& os, const Bureaucrat& src);