/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/18 10:36:57 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/18 11:02:13 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Bureaucrat
{
	public :

		Bureaucrat();
		Bureaucrat(const Bureaucrat& cpy);
		~Bureaucrat();

		Bureaucrat&	operator=(const Bureaucrat& src);

		std::string	getName() const;
		int			getGrade() const;

		void		incrGrade();
		void		decrGrade();


	private :

		const std::string	_name;
		int					_grade;

} ;