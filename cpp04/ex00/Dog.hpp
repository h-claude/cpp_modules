/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:53:53 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/08 17:40:01 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#include "Animal.hpp"

class Dog : public Animal
{
	public :

		Dog();
		Dog(const Dog& cpy);
		~Dog();

		Dog&	operator=(const Dog& src);

		void	makeSound() const;
};