/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/04 16:08:53 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/04 17:47:22 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap	Peter("Peter");
	ClapTrap	Jerome("Jerome");

	Peter.attack("Jerome");
	Jerome.takeDamage(Peter.getattackDamage());
	Jerome.setattackDamage(2);
	Jerome.attack("Peter");
	Peter.takeDamage(Jerome.getattackDamage());
	Peter.beRepaired(2);
	std::cout << "Finally Jerome thinks and takes an AK-47 and..." << std::endl;
	Jerome.setattackDamage(47);
	Jerome.attack("Peter");
	Peter.takeDamage(Jerome.getattackDamage());
	std::cout << "Jerome wins...." << std::endl << std::endl;
	std::cout << "But suddenly..." << std::endl;
	ClapTrap	BigBrother("BigBrother");
	std::cout << "BigBrother is Peter's brother, and he wants to brutally kill Jerome." << std::endl;
	std::cout << "Jerome is scared and shoots everywhere !!!" << std::endl;

	Jerome.attack("the wall");
	Jerome.attack("the floor");
	Jerome.attack("the sky");
	Jerome.attack("a tree");
	Jerome.attack("Peter's dead body");
	ClapTrap	TheWomanBehindTheBigBrother("the woman behind the BigBrother");
	Jerome.attack("the woman behind the BigBrother");
	TheWomanBehindTheBigBrother.takeDamage(Jerome.getattackDamage());
	Jerome.attack("the window of Peter's home");
	Jerome.attack("Peter's balloon");
	Jerome.setattackDamage(1);
	std::cout << "And after many shots..." << std::endl;
	Jerome.attack("the hat of BigBrother");
	std::cout << "BigBrother decides to charge a super punch and..." << std::endl;
	BigBrother.setattackDamage(100000000);
	BigBrother.attack("Jerome");
	Jerome.takeDamage(BigBrother.getattackDamage());
	std::cout << "Jerome tries to repair himself but..." << std::endl;
	Jerome.beRepaired(1);
	
	

	
}