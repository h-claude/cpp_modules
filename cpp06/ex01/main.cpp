/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 15:56:04 by hclaude           #+#    #+#             */
/*   Updated: 2025/05/05 16:15:22 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"
#include "Data.hpp"
#include <iostream>

int main()
{
	Data* deserialized_data = 0;
	Data* data = new Data;
	if (!data)
	{
		std::cerr << "Memory allocation failed" << std::endl;
		return 1;
	}
	data->str = "Hello, World!";
	data->num = 42;

	std::cout << "Original Data:" << std::endl;
	std::cout << "String: " << data->str << std::endl;
	std::cout << "Number: " << data->num << std::endl;

	uintptr_t uinptr_v = Serializer::serialize(data);

	std::cout << "Serialized Data (uintptr_t): " << uinptr_v << std::endl;

	deserialized_data = Serializer::deserialize(uinptr_v);

	std::cout << "Deserialized Data:" << std::endl;
	std::cout << "String: " << deserialized_data->str << std::endl;
	std::cout << "Number: " << deserialized_data->num << std::endl;

	delete data;
}