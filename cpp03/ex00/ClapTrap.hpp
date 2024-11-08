/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 14:53:08 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/08 23:55:31 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class ClapTrap
{
	public :

		ClapTrap();
		ClapTrap(const std::string name);
		ClapTrap(const ClapTrap& src);
		~ClapTrap();

		ClapTrap&	operator=(const ClapTrap& src);

		int			gethitPoints();
		int			getenergyPoints();
		int			getattackDamage();
		std::string	getName();

		void		sethitPoints(int hitPoints);
		void		setenergyPoints(int energyPoints);
		void		setattackDamage(int attackDamage);
		void		setName(std::string name);

		void		attack(const std::string& target);
		void		takeDamage(unsigned int amount);
		void		beRepaired(unsigned int amount);

	private :

		std::string _name;
		int			_hitPoints;
		int			_energyPoints;
		int			_attackDamage;
};