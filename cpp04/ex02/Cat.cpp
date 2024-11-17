/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:14:02 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/17 09:41:36 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	try {
		_brain = new Brain();
	}
	catch (std::bad_alloc &e)
	{
		std::cerr << "Class Cat : " << _type << " has failed to allocate memory!" << std::endl;
		std::exit(1);
	}
	std::cout << "Class Cat : " << _type << " has been created!" << std::endl;
}

Cat::Cat(const Cat& cpy) : Animal(cpy._type)
{
	try {
		_brain = new Brain(*cpy._brain);
	}
	catch (std::bad_alloc &e)
	{
		std::cout << "Class Cat : " << _type << " has failed to allocate memory!" << std::endl;
		std::exit(1);
	}
	std::cout << "Class Cat : " << _type << " has been copied!" << std::endl;
}

Cat::~Cat()
{
	delete _brain;
	std::cout << "Class Cat : " << _type << " has been destroyed!" << std::endl;
}

Cat&	Cat::operator=(const Cat& cpy)
{
	if (this == &cpy)
		return *this;
	delete _brain;
	try {
		_brain = new Brain(*cpy._brain);
	}
	catch (std::bad_alloc &e)
	{
		std::cerr << "Class cat : " << _type << " has failed to allocate memory!" << std::endl;
		std::exit(1);
	}
	_type = cpy._type;
	std::cout << "Class Cat : " << _type << " has been assigned!" << std::endl;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Class Cat : " << _type << " \"miaou miaou\"!" << std::endl;
}

void	Cat::setIdea(int index, const std::string& idea)
{
	if (index < 0 || index >= 100)
	{
		std::cerr << "Class Cat : Idea index out of range!" << std::endl;
		return ;
	}
	_brain->setIdea(index, idea);
	std::cout << "Class Cat : " << _type << " has set idea!" << std::endl;
}

std::string	Cat::getIdea(int index) const
{
	if (index < 0 || index >= 100)
	{
		std::cerr << "Class Cat : Idea index out of range!" << std::endl;
		return "";
	}
	return _brain->getIdea(index);
}