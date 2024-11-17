/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 18:38:02 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/17 09:34:53 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice"){}

Ice::Ice(const Ice& cpy) : AMateria(cpy.getType()){}

Ice::~Ice(){}

Ice& Ice::operator=(const Ice& src)
{
	if (this == &src)
		return (*this);
	this->_type = src.getType();
	return (*this);
}

AMateria*	Ice::clone() const
{
	std::cout << "Cloning Ice" << std::endl;
	return (new Ice(*this));
}

void		Ice::use(ICharacter& target) const
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}