/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:14:02 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/08 17:44:01 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << "Class Cat : " << _type << " has been created!" << std::endl;
}

Cat::Cat(const Cat& cpy) : Animal(cpy._type)
{
	*this = cpy;
	std::cout << "Class Cat : " << _type << " has been copied!" << std::endl;
}

Cat::~Cat()
{
	std::cout << "Class Cat : " << _type << " has been destroyed!" << std::endl;
}

Cat&	Cat::operator=(const Cat& cpy)
{
	if (this == &cpy)
		return *this;
	_type = cpy._type;
	std::cout << "Class Cat : " << _type << "has been assigned!" << std::endl;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Class Cat : " << _type << "'miaou miaou!'" << std::endl;
}