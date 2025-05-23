/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:18:50 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/10 17:16:17 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : virtual public ClapTrap
{
	public :

		ScavTrap();
		ScavTrap(const std::string& name);
		ScavTrap(const ScavTrap& cpy);
		~ScavTrap();

		ScavTrap&	operator=(const ScavTrap& src);

		void		guardGate();
		void		attack(const std::string& name);

	protected :

		static const int	_initHitPoints = 100;
		static const int	_initEnergyPoints = 50;
		static const int	_initAttackDamage = 20;

	private :

		bool	_guardGateState;

};