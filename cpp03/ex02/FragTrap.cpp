/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/05 18:31:52 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/09 00:02:30 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
	this->_attackDamage = 30;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	std::cout << "FragTrap " << _name << " has been created!" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
	this->_attackDamage = 30;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	std::cout << "FragTrap " << _name << " has been created!" << std::endl;
}

FragTrap::FragTrap(const FragTrap& cpy) : ClapTrap(cpy._name)
{
	this->_attackDamage = cpy._attackDamage;
	this->_energyPoints = cpy._energyPoints;
	this->_hitPoints = cpy._hitPoints;
	std::cout << "FragTrap " << _name << " has been copied." << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << _name << " has been destroyed!" << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& src)
{
	if (this == &src)
		return *this;
	this->_name = src._name;
	this->_attackDamage = src._attackDamage;
	this->_energyPoints = src._energyPoints;
	this->_hitPoints = src._hitPoints;
	std::cout << "FragTrap " << _name << " has been created by assignation." << std::endl;
	return *this;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " is asking for a high five!" << std::endl;
}
