/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:14:02 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/08 18:30:05 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << "Class WrongCat : " << _type << " has been created!" << std::endl;
}

WrongCat::WrongCat(const WrongCat& cpy) : WrongAnimal(cpy._type)
{
	*this = cpy;
	std::cout << "Class WrongCat : " << _type << " has been copied!" << std::endl;
}

WrongCat::~WrongCat()
{
	std::cout << "Class WrongCat : " << _type << " has been destroyed!" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& cpy)
{
	if (this == &cpy)
		return *this;
	_type = cpy._type;
	std::cout << "Class WrongCat : " << _type << "has been assigned!" << std::endl;
	return *this;
}
