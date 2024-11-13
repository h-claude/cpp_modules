/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:53:53 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/13 18:48:38 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstdlib>

#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal
{
	public :

		Dog();
		Dog(const Dog& cpy);
		virtual ~Dog();

		Dog&	operator=(const Dog& src);

		void	makeSound() const;
		void	setIdea(int index, const std::string& idea);
		std::string	getIdea(int index) const;

	private :

		Brain*	_brain;

};