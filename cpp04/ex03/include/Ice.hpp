/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 20:00:38 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/15 18:40:21 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Ice : public AMateria
{
	public :

		Ice();
		Ice(const Ice& cpy);
		~Ice();

		Ice& operator=(const Ice& src);

		AMateria*	clone() const;
		void		use(ICharacter& target) const;

	private :



};