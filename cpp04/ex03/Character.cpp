/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:18:17 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/17 09:03:12 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("Steve_default"){
	_inv[0] = 0;
	_inv[1] = 0;
	_inv[2] = 0;
	_inv[3] = 0;
}

Character::Character(const std::string& name) : _name(name) {
	_inv[0] = 0;
	_inv[1] = 0;
	_inv[2] = 0;
	_inv[3] = 0;
}

Character::Character(const Character& cpy)
{
	*this = cpy;
}

Character::~Character()
{
	for (int i = 0; i < 4; i++)
	{
		delete this->_inv[i];
	}
}

Character&	Character::operator=(const Character& src)
{
	if (this == &src)
		return (*this);
	for (int i = 0; i < 4; i++)
	{
		delete _inv[i];
	}
	for (int i = 0; i < 4; i++)
	{
		this->_inv[i] = src._inv[i]->clone();
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (this->_name);
}

void	Character::equip(AMateria* m)
{
	if (m == 0)
	{
		std::cout << this->getName() << " cannot equip `nothing`." << std::endl;
		return ;
	}
	for (int i = 0; i < 4; i++)
	{
		if (!this->_inv[i])
		{
			this->_inv[i] = m;
			std::cout << this->getName() << " equipped " << m->getType() << "." << std::endl;
			return ;
		}
	}
	std::cout << this->getName() << " is full." << std::endl;
	return ;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Index out of range." << std::endl;
		return ;
	}
	this->_inv[idx] = 0;
	std::cout << this->getName() << " unequipped slot " << idx << "." << std::endl;
}

void	Character::use(int idx, ICharacter& target)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Index out of range." << std::endl;
		return ;
	}
	this->_inv[idx]->use(target);
}
