/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:47:37 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/13 18:51:36 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"
#include "Animal.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	{
		std::cout << "Basic test with Animal" << std::endl;
		const Animal* j = new Dog();
		const Animal* i = new Cat();

		delete j;
		delete i;
		std::cout << std::endl;
	}
	{
		std::cout << "Test with 10 Animals" << std::endl;
		std::cout << std::endl;
		Animal* animals[10];
		for (int i = 0; i < 5; i++)
		{
			animals[i] = new Dog();
		}
		for (int i = 5; i < 10; i++)
		{
			animals[i] = new Cat();
		}
		for (int i = 0; i < 10; i++)
		{
			animals[i]->makeSound();
			delete animals[i];
		}
	}
	{
		std::cout << std::endl;
		std::cout << "Test with Dog" << std::endl;
		std::cout << std::endl;

		Dog dog;
		Dog dog2;

		dog.setIdea(0, "I am a dog");
		std::cout << "Before assignation : " << dog.getIdea(0) << std::endl;
		dog2.setIdea(0, "I am a dog too");
		dog = dog2;
		std::cout << "After assignation : "<< dog.getIdea(0) << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "Test with Cat" << std::endl;
		std::cout << std::endl;

		Cat cat;
		Cat cat2;

		cat.setIdea(0, "I am a cat");
		std::cout << "Before assignation : " << cat.getIdea(0) << std::endl;
		cat2.setIdea(0, "I am a cat too");

		cat = cat2;
		std::cout << "After assignation : "<< cat.getIdea(0) << std::endl;
	}
}