/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:15:24 by hclaude           #+#    #+#             */
/*   Updated: 2024/10/30 15:32:59 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->_name = name;
	this->_weapon = NULL;
}

HumanB::HumanB(std::string name, Weapon weapon)
{
	this->_name = name;
	this->_weapon = &weapon;
}

HumanB::~HumanB(){}

void HumanB::attack()
{
	if (_weapon)
		std::cout << _name << " attacks with " << (*_weapon).getType() << std::endl;
	else
		std::cout << _name << " attacks with nothing" << std::endl;
}

void HumanB::setWeapon(Weapon& weapon)
{
	_weapon = &weapon;
}