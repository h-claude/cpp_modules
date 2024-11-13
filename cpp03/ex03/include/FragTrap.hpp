/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:31:54 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/10 17:11:07 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : virtual public ClapTrap
{
	public :

		FragTrap();
		FragTrap(const std::string& name);
		FragTrap(const FragTrap& cpy);
		~FragTrap();

		FragTrap&	operator=(const FragTrap& src);
		void		highFivesGuys(void);

	protected :

		static const int	_initHitPoints = 100;
		static const int	_initEnergyPoints = 100;
		static const int	_initAttackDamage = 30;
};