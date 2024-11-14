/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:47:40 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/08 18:23:40 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : _type("NonSpecifiedAnimal")
{
	std::cout << "Class WrongAnimal : " << _type << " has been created!" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string& name) : _type(name)
{
	std::cout << "Class WrongAnimal : " << _type << " has been created!" << std::endl;
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "Class WrongAnimal : " << _type << " has been destroyed!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& cpy) : _type(cpy._type)
{
	*this = cpy;
	std::cout << "Class WrongAnimal : " << _type << " has been created by copy!" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& src)
{
	if (this == &src)
		return (*this);
	this->_type = src._type;
	std::cout << "Class WrongAnimal : " << _type << " has been assigned!" << std::endl;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	std::cout << "Class WrongAnimal : " << _type << " try to make a weird sound!" << std::endl;
}

std::string	WrongAnimal::getType() const
{
	return _type;
}
