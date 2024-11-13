/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 17:26:45 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/13 18:49:13 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Class Brain has been created!" << std::endl;
}

Brain&	Brain::operator=(const Brain& cpy)
{
	if (this == &cpy)
		return *this;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = cpy._ideas[i];
	std::cout << "Class Brain has been assigned!" << std::endl;
	return *this;
}

Brain::Brain(const Brain& cpy)
{
	*this = cpy;
	std::cout << "Class Brain has been copied!" << std::endl;
}

Brain::~Brain()
{
	std::cout << "Class Brain has been destroyed!" << std::endl;
}

void	Brain::setIdea(int index, const std::string& idea)
{
	if (index < 0 || index >= 100)
	{
		std::cerr << "Class Brain : Idea index out of range!" << std::endl;
		return ;
	}
	this->_ideas[index] = idea;
}

std::string	Brain::getIdea(int index) const
{
	if (index < 0 || index >= 100)
	{
		std::cerr << "Class Brain : Idea index out of range!" << std::endl;
		return "";
	}
	return this->_ideas[index];
}