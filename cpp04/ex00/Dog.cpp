/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:14:02 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/08 17:44:12 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << "Class Dog : " << _type << " has been created!" << std::endl;
}

Dog::Dog(const Dog& cpy) : Animal(cpy._type)
{
	*this = cpy;
	std::cout << "Class Dog : " << _type << " has been copied!" << std::endl;
}

Dog::~Dog()
{
	std::cout << "Class Dog : " << _type << " has been destroyed!" << std::endl;
}

Dog&	Dog::operator=(const Dog& cpy)
{
	if (this == &cpy)
		return *this;
	_type = cpy._type;
	std::cout << "Class Dog : " << _type << "has been assigned!" << std::endl;
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Class Dog : " << _type << "'wouaf wouaf!'" << std::endl;
}