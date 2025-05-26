/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 20:41:18 by hclaude           #+#    #+#             */
/*   Updated: 2025/05/26 20:43:08 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include "easyfind.hpp"
#include <vector>
#include <list>

int main()
{
	std::vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(3);
	vec.push_back(4);
	vec.push_back(5);

	try
	{
		easyfind(vec, 3);
		easyfind(vec, 10);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	// Test avec un std::list
	std::list<int> lst;
	lst.push_back(10);
	lst.push_back(20);
	lst.push_back(30);
	lst.push_back(40);

	try
	{
		easyfind(lst, 20);
		easyfind(lst, 50);
	}
	catch (const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}