/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:53:56 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/08 17:39:58 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

#include "Animal.hpp"

class Cat : public Animal
{
	public :

		Cat();
		Cat(const Cat& cpy);
		~Cat();

		Cat&	operator=(const Cat& src);

		void	makeSound() const;

};