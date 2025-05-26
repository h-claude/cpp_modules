/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 20:19:51 by hclaude           #+#    #+#             */
/*   Updated: 2025/05/26 20:36:55 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

# include <iostream>
# include <algorithm>

template <typename T>
void	easyfind(T& container, int i)
{
	typename T::iterator it = std::find(container.begin(), container.end(), i);
	if (it == container.end())
		throw std::runtime_error("Value not found");
	std::cout << "Value found" << std::endl;
}

#endif