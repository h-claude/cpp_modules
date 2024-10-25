/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:39:53 by hclaude           #+#    #+#             */
/*   Updated: 2024/10/25 17:42:36 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"

class HumanB
{
	public :

		HumanB(std::string);
		HumanB(std::string name, Weapon weapon);
		~HumanB();
		
		void	attack();
		void	setWeapon(Weapon& weapon);

	private :

		Weapon*		_weapon;
		std::string	_name;
	
};

#endif