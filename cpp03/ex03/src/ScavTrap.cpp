/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 18:35:32 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/10 17:13:37 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
	this->_attackDamage = ScavTrap::_initAttackDamage;
	this->_energyPoints = ScavTrap::_initEnergyPoints;
	this->_hitPoints = ScavTrap::_initHitPoints;
	this->_guardGateState = false;
	std::cout << "ScavTrap " << _name << " has been created!" << std::endl;
}

ScavTrap::ScavTrap(const std::string& name) : ClapTrap(name)
{
	this->_attackDamage = ScavTrap::_initAttackDamage;
	this->_energyPoints = ScavTrap::_initEnergyPoints;
	this->_hitPoints = ScavTrap::_initHitPoints;
	this->_guardGateState = false;
	std::cout << "ScavTrap " << _name << " has been created!" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << getName() << " has been destroyed!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& cpy) : ClapTrap(cpy._name)
{
	this->_hitPoints = cpy._hitPoints;
	this->_energyPoints = cpy._energyPoints;
	this->_attackDamage = cpy._attackDamage;
	this->_guardGateState = cpy._guardGateState;
	std::cout << "ScavTrap " << _name << " has been copied." << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& src)
{
	if (this == &src)
		return *this;
	this->_name = src._name;
	this->_attackDamage = src._attackDamage;
	this->_energyPoints = src._energyPoints;
	this->_hitPoints = src._hitPoints;
	this->_guardGateState = src._guardGateState;
	std::cout << "ScavTrap " << _name << " has been created by assignation." << std::endl;
	return *this;
}

void	ScavTrap::guardGate()
{
	if (_guardGateState == true)
	{
		std::cout << "ScavTrap " << _name << " is already Guard Gate." << std::endl;
		return ;
	}
	std::cout << "ScavTrap " << _name << " is Guard Gate." << std::endl;
	this->_guardGateState = true;
}

void	ScavTrap::attack(const std::string& target)
{
	if (!enoughEnergy(*this))
		return;
	if (isDead(*this))
	{
		std::cout << "ScavTrap "<< _name << "Im dead, I cant attack!" << std::endl;
		return;
	}
	this->setenergyPoints(--_energyPoints);
	std::cout << "ScavTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}