/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:40:16 by hclaude           #+#    #+#             */
/*   Updated: 2024/10/22 21:17:35 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main(void)
{
	PhoneBook Blabla;
	while (1)
	{
		std::string command;
		std::cout << "PUT THE COMMAND HERE ! :" << std::endl;
		std::getline(std::cin, command);
		if (std::cin.fail())
		{
			std::cout << "Error" << std::endl;
			return (0);
		}
		if (command == "EXIT")
			break;
		else if (command == "ADD")
			Blabla.add_contact();
		else if (command == "SEARCH")
			Blabla.search_contact();
		else
			std::cout << "Command not found" << std::endl;
	}
}