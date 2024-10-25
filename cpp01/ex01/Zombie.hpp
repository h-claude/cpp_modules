/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:50:05 by hclaude           #+#    #+#             */
/*   Updated: 2024/10/25 15:35:45 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP

#define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
	public :
	
		Zombie(void);
		Zombie(std::string name);
		~Zombie();

		void	announce(void);
		void	setName(std::string name);

	private :

		std::string _name;

} ;

Zombie*	zombieHorde(int N, std::string name);

#endif
