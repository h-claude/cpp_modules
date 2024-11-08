/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 15:06:15 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/09 00:23:56 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : _name("Default"), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " has been created." << std::endl;
}

ClapTrap::ClapTrap(const std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0)
{
	std::cout << "ClapTrap " << _name << " has been created." << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& src) : _name(src._name), _hitPoints(src._hitPoints), _energyPoints(src._energyPoints), _attackDamage(src._attackDamage)
{
	std::cout << "ClapTrap " << _name << " has been copied." << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap " << _name << " has been destroyeeeeed." << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& src)
{
	if (this != &src)
	{
		_name = src._name;
		_hitPoints = src._hitPoints;
		_attackDamage = src._attackDamage;
		_energyPoints = src._energyPoints;
	}
	return *this;
}

int	ClapTrap::gethitPoints()
{
	return _hitPoints;
}

int	ClapTrap::getenergyPoints()
{
	return _energyPoints;
}

int	ClapTrap::getattackDamage()
{
	return _attackDamage;
}

std::string	ClapTrap::getName()
{
	return _name;
}

void		ClapTrap::sethitPoints(int hitPoints)
{
	if (hitPoints < 0)
	{
		_hitPoints = 0;
		return;
	}
	_hitPoints = hitPoints;
}

void		ClapTrap::setenergyPoints(int energyPoints)
{
	if (energyPoints < 0)
	{
		_energyPoints = 0;
		return ;
	}
	_energyPoints = energyPoints;
}

void		ClapTrap::setattackDamage(int attackDamage)
{
	if (attackDamage < 0)
	{
		_attackDamage = 0;
		return;
	}
	_attackDamage = attackDamage;
}

void		ClapTrap::setName(std::string name)
{
	_name = name;
}

bool	enoughEnergy(ClapTrap& object)
{
	if (object.getenergyPoints() <= 0)
	{
		object.setenergyPoints(0);
		std::cout << "ClapTrap " << object.getName() << " doesn't have enough energy points!" << std::endl;
		return false;
	}
	return true;
}

bool	isDead(ClapTrap& object)
{
	if (object.gethitPoints() == 0)
		return true;
	return false;
}

void	ClapTrap::attack(const std::string& target)
{
	if (!enoughEnergy(*this))
		return;
	if (isDead(*this))
	{
		std::cout << "ClapTrap " << "Im dead, I cant attack!" << std::endl;
		return;
	}
	this->setenergyPoints(--_energyPoints);
	std::cout << "ClapTrap " << _name << " attacks " << target << ", causing " << _attackDamage << " points of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (isDead(*this))
	{
		std::cout << "ClapTrap " << _name << "STOP BEAT ME, IM ALREADY DEAD!!!!" << std::endl;
		return;
	}
	if (amount == 0)
	{
		std::cout << "ClapTrap " << _name << " didn't receive any damage!" << std::endl;
		return;
	}
	this->sethitPoints(_hitPoints - amount);
	std::cout << "ClapTrap " << _name << " receives " << amount << " points of damage!" << std::endl;
	if (!_hitPoints)
		std::cout << "ClapTrap " << _name << " is dead 😢" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	int	tmpEnergy;
	if (isDead(*this))
	{
		std::cout << "ClapTrap " << _name << "Im dead, I cant repair myself!" << std::endl;
		return;
	}
	if (!enoughEnergy(*this))
		return;
	tmpEnergy = _energyPoints;
	this->setenergyPoints(_energyPoints - amount);
	if (!enoughEnergy(*this))
	{
		_energyPoints = tmpEnergy;
		return;
	}
	if (amount == 0)
	{
		std::cout << "ClapTrap " << _name << " doesn't repair himself." << std::endl;
		return ;
	}
	this->sethitPoints(_hitPoints + amount);
	std::cout << "ClapTrap " << _name << " repairs himself for " << amount << " hit points." << std::endl;
}