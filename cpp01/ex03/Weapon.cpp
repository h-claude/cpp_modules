/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:15:26 by hclaude           #+#    #+#             */
/*   Updated: 2024/10/30 15:31:22 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::Weapon(std::string type)
{
	this->_type = type;
}

Weapon::~Weapon(){}

const std::string	&Weapon::getType() const
{
	return (_type);
}

void	Weapon::setType(std::string type)
{
	this->_type = type;
}