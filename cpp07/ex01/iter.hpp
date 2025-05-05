/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 17:21:11 by hclaude           #+#    #+#             */
/*   Updated: 2025/05/05 17:54:19 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

#include <iostream>
#include <string>

template <typename T>
void iter(T *array, size_t lengh, void (*f)(T&))
{
	if (!array || !f || lengh == 0)
		return;
	for (size_t i = 0; i < lengh; i++)
		f(array[i]);
}

template <typename T>
void test(T& a)
{
	a++;
}

#endif