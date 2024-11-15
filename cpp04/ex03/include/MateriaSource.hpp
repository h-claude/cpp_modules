/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 19:51:41 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/15 20:41:29 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#include <AMateria.hpp>
#include <IMateriaSource.hpp>

class MateriaSource : public IMateriaSource
{
	public :

		MateriaSource();
		MateriaSource(const MateriaSource& cpy);
		virtual ~MateriaSource();

		MateriaSource&	operator=(const MateriaSource& src);

		void			learnMateria(AMateria* m);
		AMateria*		createMateria(std::string const & type);

	private :

		AMateria*	_inv[4];
};