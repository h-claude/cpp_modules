/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:18:17 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/14 19:55:21 by hclaude          ###   ########.fr       */
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

Character::Character(const Character& cpy) : _name(cpy.getName())
{
	for (int i = 0; i < 4; i++)
	{
		this->_inv[i] = cpy._inv[i]->clone();
	}
}