/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:08:53 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/10 16:38:22 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	{
		std::cout << std::endl << "=+=+=+= ClapTrap: =+=+=+=" << std::endl << std::endl;

		ClapTrap	clap("Je suis monsieur clap");
		ClapTrap	clap2(clap);

		std::cout << std::endl;
		std::cout << clap.getName() << std::endl;
		std::cout << clap.gethitPoints() << std::endl;
		std::cout << clap.getenergyPoints() << std::endl;
		std::cout << clap.getattackDamage() << std::endl;
		std::cout << std::endl;

		clap.attack("un ennemi");
		clap.takeDamage(5);
		clap.beRepaired(3);
		clap.takeDamage(10);
	}
	{
		std::cout << std::endl << "=+=+=+= ScavTrap: =+=+=+=" << std::endl << std::endl;

		ScavTrap	scav("Je suis monsieur scav");
		ScavTrap	scav2(scav);

		std::cout << std::endl;
		std::cout << scav.getName() << std::endl;
		std::cout << scav.gethitPoints() << std::endl;
		std::cout << scav.getenergyPoints() << std::endl;
		std::cout << scav.getattackDamage() << std::endl;
		std::cout << std::endl;

		scav.attack("un ennemi");
		scav.takeDamage(5);
		scav.beRepaired(3);
		scav.guardGate();
		scav.takeDamage(1000);
	}
	{
		std::cout << std::endl << "=+=+=+= FragTrap: =+=+=+=" << std::endl << std::endl;

		FragTrap	frag("Je suis monsieur frag");
		FragTrap	frag2(frag);

		std::cout << std::endl;
		std::cout << frag.getName() << std::endl;
		std::cout << frag.gethitPoints() << std::endl;
		std::cout << frag.getenergyPoints() << std::endl;
		std::cout << frag.getattackDamage() << std::endl;
		std::cout << std::endl;

		frag.attack("un ennemi");
		frag.takeDamage(5);
		frag.beRepaired(3);
		frag.highFivesGuys();
		frag.takeDamage(1000);
	}
	{
		std::cout << std::endl << "=+=+=+= DiamondTrap: =+=+=+=" << std::endl << std::endl;

		DiamondTrap	diamond("Je suis monsieur diamond");
		DiamondTrap	diamond2(diamond);

		std::cout << std::endl;
		std::cout << diamond.getName() << std::endl;
		std::cout << diamond.gethitPoints() << std::endl;
		std::cout << diamond.getenergyPoints() << std::endl;
		std::cout << diamond.getattackDamage() << std::endl;
		std::cout << std::endl;

		diamond.attack("un ennemi");
		diamond.takeDamage(5);
		diamond.beRepaired(3);
		diamond.guardGate();
		diamond.highFivesGuys();
		diamond.whoAmI();
		diamond.takeDamage(1000);
	}
	{
		std::cout << std::endl << "=+=+=+= Default constructors: =+=+=+=" << std::endl << std::endl;
		// default constructors
		ClapTrap	clap;
		ScavTrap	scav;
		FragTrap	frag;
		DiamondTrap	diamond;

		clap.attack("un ennemi");
		scav.attack("un ennemi");
		frag.attack("un ennemi");
		diamond.attack("un ennemi");
	}
}