/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:08:53 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/05 20:31:08 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
	ClapTrap	Peter("Peter");
	ScavTrap	Jerome("Jerome");
	FragTrap	John("John");
	FragTrap	John_cpy(John);
	ScavTrap	Jerome_cpy(Jerome);
	ClapTrap	Peter_cpy(Peter);

	Peter.attack("The sky");
	Jerome.attack("The floor");
	John.attack("The wall");
	John_cpy.attack("The door");
	Jerome_cpy.attack("The window");
	Peter_cpy.attack("The ceiling");
	Jerome.guardGate();
	Jerome.guardGate();
	John.highFivesGuys();
}