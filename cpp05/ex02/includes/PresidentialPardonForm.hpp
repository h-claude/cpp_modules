/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 13:40:33 by hclaude           #+#    #+#             */
/*   Updated: 2025/04/26 15:07:16 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# pragma once

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	public :

		PresidentialPardonForm();
		PresidentialPardonForm(const std::string& target);
		PresidentialPardonForm(const PresidentialPardonForm& src);
		~PresidentialPardonForm();

		PresidentialPardonForm& operator=(const PresidentialPardonForm& src);

		void	execute(const Bureaucrat& executor) const;
		std::string	getTarget() const;

	private :

		std::string _target;

};