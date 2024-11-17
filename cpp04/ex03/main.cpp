/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/15 20:33:14 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/17 08:48:05 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include "ICharacter.hpp"
#include "Character.hpp"
#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "Cure.hpp"
#include "Ice.hpp"

int main()
{
	{
		IMateriaSource* src = new MateriaSource();
		src->learnMateria(new Ice());
		src->learnMateria(new Cure());

		ICharacter* me = new Character("me");

		AMateria* tmp;
		tmp = src->createMateria("ice");
		me->equip(tmp);
		tmp = src->createMateria("cure");
		me->equip(tmp);

		ICharacter* bob = new Character("bob");

		me->use(0, *bob);
		me->use(1, *bob);

		delete bob;
		delete me;
		delete src;
	}
	{
		std::cout << std::endl;
		ICharacter* test = new Character("Bob");
		std::cout << "Testing full inventory" << std::endl;
		AMateria	*m1 = new Ice();
		AMateria	*m2 = new Ice();
		AMateria	*m3 = new Ice();
		AMateria	*m4 = new Ice();
		AMateria	*m5 = new Ice();

		test->equip(NULL);
		test->equip(m1);
		test->equip(m2);
		test->equip(m3);
		test->equip(m4);
		test->equip(m5);
		std::cout << std::endl;
		std::cout << "Testing re-equip" << std::endl;
		test->equip(m4);
		test->equip(m4);
		std::cout << std::endl;
		std::cout << "Testing unequip" << std::endl;
		test->unequip(50);
		test->unequip(-1);
		test->unequip(3);
		test->equip(m5);

		delete test;
		delete m4;

		// Testing IMateriaSource

		std::cout << std::endl;
		std::cout << "Testing IMateriaSource" << std::endl;
		IMateriaSource* src2 = new MateriaSource();
		AMateria* m6 = new Ice();
		AMateria* m7 = new Cure();
		AMateria* m8 = new Ice();
		AMateria* m9 = new Cure();

		src2->learnMateria(NULL);
		src2->learnMateria(m6);
		src2->learnMateria(m7);
		src2->learnMateria(m8);
		src2->learnMateria(m9);
		src2->learnMateria(m9);

		delete src2;
	}
}