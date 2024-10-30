/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/24 16:49:59 by hclaude           #+#    #+#             */
/*   Updated: 2024/10/30 15:24:30 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void)
{
	Zombie	*pablo = newZombie("Pablo");
	randomChump("Jules");
	Zombie Roman("Roman");
	Roman.announce();
	Zombie lele("Lele");
	lele.announce();
	Zombie RandomZombie;
	RandomZombie.announce();
	pablo->announce();
	delete pablo;
}