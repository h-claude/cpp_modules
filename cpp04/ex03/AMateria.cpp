/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:18:21 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/14 19:12:56 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria() : _type("Default")
{
}

AMateria::AMateria(std::string const & type) : _type(type)
{
}

AMateria::AMateria(const AMateria& cpy) : _type(cpy._type)
{	
}

AMateria& AMateria::operator=(const AMateria& src)
{
	if (this == &src)
		return *this;
	this->_type = src._type;
	return (*this);
}

std::string const & AMateria::getType() const
{
	return _type;
}

void AMateria::use(ICharacter& target)
{
	if (_type == "ice")
		std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
	else if (_type == "cure")
		std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}