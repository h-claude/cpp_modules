/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/25 14:21:35 by hclaude           #+#    #+#             */
/*   Updated: 2025/04/27 14:09:29 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
# define AFORM_HPP


#include <string>
#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	public :

		AForm();
		AForm(const AForm& cpy);
		AForm(int gradeToSign, int gradeToExecute, const std::string& name);
		virtual ~AForm() = 0;

		AForm&		operator=(const AForm& src);

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
		virtual void	execute(const Bureaucrat& executor) const = 0;

	private :

		const std::string	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExecute;
};

std::ostream& operator<<(std::ostream& os, const AForm& src);

#endif