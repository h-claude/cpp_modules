/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:18:17 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/15 19:49:53 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character() : _name("Steve_default"){
	_inv[0] = nullptr;
	_inv[1] = nullptr;
	_inv[2] = nullptr;
	_inv[3] = nullptr;
}

Character::Character(const std::string& name) : _name(name) {
	_inv[0] = nullptr;
	_inv[1] = nullptr;
	_inv[2] = nullptr;
	_inv[3] = nullptr;
}

Character::Character(const Character& cpy) : Character(cpy.getName())
{
	*this = cpy;
}

Character::~Character(){}

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
	int i = -1;

	if (m == nullptr)
	{
		std::cout << this->getName() << " cannot equip `nothing`." << std::endl;
		return ;
	}
	while (this->_inv[++i]);
	this->_inv[i] = m;
}

void	Character::unequip(int idx)
{
	if (idx < 0 || idx > 3)
	{
		std::cout << "Index out of range." << std::endl;
		return ;
	}
	this->_inv[idx] = nullptr;
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
