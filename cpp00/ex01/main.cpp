/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/21 17:40:16 by hclaude           #+#    #+#             */
/*   Updated: 2024/10/22 22:07:37 by hclaude          ###   ########.fr       */
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
		if (command.empty())
			std::cout << "Empty input. Please retry !" << std::endl;
		else if (command == "EXIT")
			break;
		else if (command == "ADD")
			Blabla.add_contact();
		else if (command == "SEARCH")
			Blabla.search_contact();
		else
			std::cout << "Command not found" << std::endl;
	}
}