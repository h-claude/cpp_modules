/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:23:22 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/17 09:19:11 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#include "AMateria.hpp"
#include "ICharacter.hpp"

class Cure : public AMateria
{
	public :

		Cure();
		Cure(const Cure& cpy);
		virtual ~Cure();

		Cure& operator=(const Cure& src);

		AMateria* 	clone() const;
		void		use(ICharacter& target) const;
} ;