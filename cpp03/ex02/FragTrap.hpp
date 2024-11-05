/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:31:54 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/05 19:27:30 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : public ClapTrap
{
	public :

		FragTrap(const std::string& name);
		FragTrap(const FragTrap& cpy);
		~FragTrap();

		FragTrap&	operator=(const FragTrap& src);
		void		highFivesGuys(void);

};