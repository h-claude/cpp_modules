/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:36:57 by hclaude           #+#    #+#             */
/*   Updated: 2025/04/27 13:59:19 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"

class AForm;

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

		void		signForm(AForm& form);

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

#endif