/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:27:21 by hclaude           #+#    #+#             */
/*   Updated: 2024/10/25 17:04:43 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp"

class HumanA
{
	public :

		HumanA(std::string name, Weapon& weapon);
		~HumanA();
		void	attack();

	private :

		std::string	_name;
		Weapon&		_weapon;
	
};

#endif