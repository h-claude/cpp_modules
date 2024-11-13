/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 16:56:05 by hclaude           #+#    #+#             */
/*   Updated: 2024/11/13 18:49:03 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <cstdlib>

class Brain
{
	public :

		Brain();
		Brain(const Brain& cpy);
		virtual ~Brain();

		Brain&	operator=(const Brain& src);
		void	setIdea(int index, const std::string& idea);
		std::string	getIdea(int index) const;

	protected :

		std::string	_ideas[100];
} ;
