/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 16:16:18 by hclaude           #+#    #+#             */
/*   Updated: 2024/10/30 15:30:37 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP

#include <iostream>
#include <string>

class Weapon
{
	public :

		Weapon();
		Weapon(std::string type);
		~Weapon();

		const std::string &getType() const;
		void		setType(std::string type);

	private :

	std::string		_type;
};

#endif