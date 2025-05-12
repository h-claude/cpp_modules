/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:19:21 by hclaude           #+#    #+#             */
/*   Updated: 2025/05/12 16:30:20 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>
# include "Data.hpp"

typedef unsigned long uintptr_t;

class Serializer
{
	public :

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);

	private :

		Serializer();
		Serializer(const Serializer& src);
		~Serializer();
		Serializer& operator=(const Serializer& rhs);
};


#endif