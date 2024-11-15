/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:47:40 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/14 15:38:31 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : _type("NonSpecifiedAnimal")
{
	std::cout << "Class Animal : " << _type << " has been created!" << std::endl;
}

Animal::Animal(const std::string& name) : _type(name)
{
	std::cout << "Class Animal : " << _type << " has been created!" << std::endl;
}
Animal::~Animal()
{
	std::cout << "Class Animal : " << _type << " has been destroyed!" << std::endl;
}

Animal::Animal(const Animal& cpy) : _type(cpy._type)
{
	*this = cpy;
	std::cout << "Class Animal : " << _type << " has been created by copy!" << std::endl;
}

Animal&	Animal::operator=(const Animal& src)
{
	if (this == &src)
		return (*this);
	this->_type = src._type;
	std::cout << "Class Animal : " << _type << " has been assigned!" << std::endl;
	return (*this);
}

std::string	Animal::getType() const
{
	return _type;
}