/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:53:56 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/14 14:36:48 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstdlib>

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal
{
	public :

		Cat();
		Cat(const Cat& cpy);
		virtual ~Cat();

		Cat&	operator=(const Cat& src);

		void	makeSound() const;
		void	setIdea(int index, const std::string& idea);
		std::string	getIdea(int index) const;

	private :

		Brain*	_brain;

};