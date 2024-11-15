/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/14 17:06:31 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/14 19:42:23 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character : public ICharacter
{
	public :

		Character();
		Character(const std::string& name);
		Character(const Character& cpy);
		virtual ~Character();

		Character&	operator=(const Character& src);

		std::string const & getName() const;
		void				equip(AMateria* m);
		void				unequip(int idx);
		void				use(int idx, ICharacter& target);

	private :

		std::string			_name;
		AMateria*			_inv[4];
} ;