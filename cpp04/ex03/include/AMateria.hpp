/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 14:57:29 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/16 18:02:38 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#include "ICharacter.hpp"

class ICharacter;

class AMateria
{
	public :

		AMateria();
		AMateria(std::string const & type);
		AMateria(const AMateria& cpy);
		virtual ~AMateria();

		AMateria& operator=(const AMateria& src);

		std::string const & getType() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target) const;
	protected :

		std::string _type;


};