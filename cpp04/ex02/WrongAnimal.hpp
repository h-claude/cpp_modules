/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 16:47:42 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/17 09:33:08 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstdlib>

class WrongAnimal
{
	public :

		WrongAnimal();
		WrongAnimal(const std::string& name);
		WrongAnimal(const WrongAnimal& cpy);
		virtual ~WrongAnimal();

		WrongAnimal& operator=(const WrongAnimal& src);

		void	makeSound() const;
		std::string		getType() const;

	protected :

		std::string _type;

};