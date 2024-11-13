/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:14:02 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/13 18:48:50 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	try
	{
		_brain = new Brain();
	}
	catch (std::bad_alloc &e)
	{
		std::cerr << "Class Dog : " << _type << " has failed to allocate memory!" << std::endl;
		std::exit(1);
	}
	std::cout << "Class Dog : " << _type << " has been created!" << std::endl;
}

Dog::Dog(const Dog& cpy) : Animal(cpy._type)
{
	try {
		_brain = new Brain(*cpy._brain);
	}
	catch (std::bad_alloc &e)
	{
		std::cout << "Class Dog : " << _type << " has failed to allocate memory!" << std::endl;
		std::exit(1);
	}
	std::cout << "Class Dog : " << _type << " has been copied!" << std::endl;
}

Dog::~Dog()
{
	delete _brain;
	std::cout << "Class Dog : " << _type << " has been destroyed!" << std::endl;
}

Dog&	Dog::operator=(const Dog& cpy)
{
	if (this == &cpy)
		return *this;
	delete _brain;
	try {
		_brain = new Brain(*cpy._brain);
	}
	catch (std::bad_alloc &e)
	{
		std::cerr << "Class Dog : " << _type << " has failed to allocate memory!" << std::endl;
		std::exit(1);
	}
	_type = cpy._type;
	std::cout << "Class Dog : " << _type << " has been assigned!" << std::endl;
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Class Dog : " << _type << " \"wouaf wouaf\"!" << std::endl;
}

void	Dog::setIdea(int index, const std::string& idea)
{
	_brain->setIdea(index, idea);
	std::cout << "Class Dog : " << _type << " has set idea!" << std::endl;
}

std::string	Dog::getIdea(int index) const
{
	return _brain->getIdea(index);
}