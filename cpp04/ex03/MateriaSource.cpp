/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:18:37 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/16 18:22:37 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	_inv[0] = NULL;
	_inv[1] = NULL;
	_inv[2] = NULL;
	_inv[3] = NULL;
}

MateriaSource::MateriaSource(const MateriaSource& cpy)
{
	*this = cpy;
}

MateriaSource::~MateriaSource()
{
	for (int i = 0; i < 4; i++)
	{
		delete this->_inv[i];
	}
}

MateriaSource& MateriaSource::operator=(const MateriaSource& src)
{
	if (this == &src)
		return (*this);
	for (int i = 0; i < 4; i++)
	{
		this->_inv[i] = src._inv[i]->clone();
	}
	return (*this);
}

void	MateriaSource::learnMateria(AMateria* m)
{
	int i = -1;

	while (i < 4 && this->_inv[++i]);
	if (i >= 4)
		return ;
	this->_inv[i] = m->clone();
	delete m;
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
	for (int i = 0; i < 4; i++)
	{
		if (type == this->_inv[i]->getType())
			return this->_inv[i]->clone();
	}
	return (0);
}