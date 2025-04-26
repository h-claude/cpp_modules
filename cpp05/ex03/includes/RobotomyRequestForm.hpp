/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 14:51:30 by hclaude           #+#    #+#             */
/*   Updated: 2025/04/26 15:28:28 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

class RobotomyRequestForm : public AForm
{
	public :

		RobotomyRequestForm();
		RobotomyRequestForm(const std::string& target);
		RobotomyRequestForm(const RobotomyRequestForm& cpy);
		~RobotomyRequestForm();

		RobotomyRequestForm& operator=(const RobotomyRequestForm& src);

		void	execute(const Bureaucrat& executor) const;
		std::string	getTarget() const;

	private :

		std::string _target;
};