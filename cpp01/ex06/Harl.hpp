/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:41:51 by hclaude           #+#    #+#             */
/*   Updated: 2024/10/28 12:55:55 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Harl
{
	public :

		Harl();
		~Harl();
		void complain(std::string level);

	private :

		void debug(void){
			std::cout << "[ DEBUG ]" << std::endl << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I really do!" << std::endl << std::endl;
		}
		void info(void){
			std::cout << "[ INFO ]" << std::endl << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl << std::endl;
		}
		void warning(void){
			std::cout << "[ WARNING ]" << std::endl << "I think I deserve to have some extra bacon for free." << std::endl << "I’ve been coming for years whereas you started working here since last month." << std::endl << std::endl;
		}
		void error(void){
			std::cout << "[ ERROR ]" << std::endl << "This is unacceptable! I want to speak to the manager now." << std::endl << std::endl;
		}
} ;
