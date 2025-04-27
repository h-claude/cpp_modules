/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 21:18:47 by hclaude           #+#    #+#             */
/*   Updated: 2025/04/27 17:53:37 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include <string>
# include "AForm.hpp"
# include "Bureaucrat.hpp"
# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include <map>
# include <iterator>

class AForm;

class Intern
{
	public:
		Intern();
		Intern(const Intern& src);
		~Intern();

		Intern&	operator=(const Intern& rhs);

		AForm*	makeForm(const std::string& formName, const std::string& target);
};

#endif

