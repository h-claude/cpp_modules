/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 18:15:19 by hclaude           #+#    #+#             */
/*   Updated: 2024/10/26 19:10:42 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void Harl::complain(std::string level)
{
	typedef void (Harl::*HarlMemFct)();
	HarlMemFct functions[] = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	int	i = 0;
	while (i < 5)
	{
		if (levels[i] == level)
			break;
		i++;
	}

	switch (i)
	{
		case (0):
			(this->*functions[0])();
		case (1):
			(this->*functions[1])();
		case (2):
			(this->*functions[2])();
		case (3):
			(this->*functions[3])(); break;
		default :
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
}