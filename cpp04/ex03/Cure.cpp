/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 17:57:50 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/15 18:49:48 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
}

Cure::Cure(const Cure& cpy) : AMateria(cpy)
{
}

Cure::~Cure()
{
}

Cure& Cure::operator=(const Cure& src)
{
	if (this == &src)
		return *this;
	AMateria::operator=(src);
	return (*this);
}

AMateria* Cure::clone() const
{
	return new Cure(*this);
}

void	Cure::use(ICharacter& target) const
{
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;
}