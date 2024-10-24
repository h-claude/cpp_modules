/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:50:05 by hclaude           #+#    #+#             */
/*   Updated: 2024/10/24 18:20:11 by hclaude          ###   ########.fr       */
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

	private :

		std::string _name;

} ;

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
