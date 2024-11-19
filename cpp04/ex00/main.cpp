/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:47:37 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/19 17:58:09 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	std::cout << "=+=+=+=+=+= Animal tests: =+=+=+=+=+=" << std::endl;
	std::cout << std::endl;

	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	std::cout << std::endl;

	meta->makeSound();
	i->makeSound();
	j->makeSound();

	std::cout << std::endl;

	delete meta;
	delete j;
	delete i;

	std::cout << std::endl;
	std::cout << "=+=+=+=+=+= WrongAnimal tests: =+=+=+=+=+=" << std::endl;
	std::cout << std::endl;

	const WrongAnimal*	meta2 = new WrongAnimal();
	const WrongAnimal*	j2 = new WrongCat();
	const WrongCat*		j3 = new WrongCat();

	std::cout << std::endl;

	meta2->makeSound();
	j2->makeSound();
	j3->makeSound();

	std::cout << std::endl;

	delete meta2;
	delete j2;
	delete j3;
}