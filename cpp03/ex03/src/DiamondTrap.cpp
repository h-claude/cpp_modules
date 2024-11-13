/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/07 15:20:32 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/10 17:16:54 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap() : ClapTrap("Default_clap_name"), FragTrap(), ScavTrap(), _name("Default")
{
	this->_attackDamage = FragTrap::_initAttackDamage;
	this->_hitPoints = FragTrap::_initHitPoints;
	this->_energyPoints = ScavTrap::_initEnergyPoints;
	std::cout << "\033[96mDiamondTrap " << _name << " has been created.\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), _name(name)
{
	this->_attackDamage = FragTrap::_initAttackDamage;
	this->_hitPoints = FragTrap::_initHitPoints;
	this->_energyPoints = ScavTrap::_initEnergyPoints;
	std::cout << "\033[96mDiamondTrap " << _name << " has been created.\033[0m" << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "\033[96mDiamondTrap " << _name << " has been destroyeeeeed.\033[0m" << std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& src) : ClapTrap(src._name + "_clap_name"), FragTrap(src._name), ScavTrap(src._name), _name(src._name)
{
	*this = src;
	std::cout << "\033[96mDiamondTrap " << _name << " has been copied.\033[0m" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& src)
{
	if (this != &src)
	{
		this->_attackDamage = src._attackDamage;
		this->_energyPoints = src._energyPoints;
		this->_hitPoints = src._hitPoints;
		this->_name = src._name;
		std::cout << "\033[96mDiamondTrap " << _name << " has been assigned.\033[0m" << std::endl;
	}
	return *this;
}

void	DiamondTrap::whoAmI()
{
	std::cout << "\033[96mI am " << _name << " and my ClapTrap name is " << ClapTrap::_name << ".\033[0m" << std::endl;
}
