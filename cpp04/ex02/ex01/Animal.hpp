/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:47:42 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/11 18:11:36 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstdlib>

class Animal
{
	public :

		Animal();
		Animal(const std::string& name);
		Animal(const Animal& cpy);
		virtual ~Animal();

		Animal& operator=(const Animal& src);

		virtual void	makeSound() const;
		std::string		getType() const;

	protected :

		std::string _type;

};