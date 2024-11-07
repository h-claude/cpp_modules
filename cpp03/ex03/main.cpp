/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:08:53 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/07 15:42:13 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap	pierre("Diamond");
	DiamondTrap ludo(pierre);
	DiamondTrap jean("Jean");

	pierre.whoAmI();
	pierre.attack("The sky");
	ludo.attack("The floor");
	ludo.whoAmI();
	ludo.guardGate();
	jean.whoAmI();
	ludo = jean;
	ludo.whoAmI();
	ludo.attack("The wall");
}