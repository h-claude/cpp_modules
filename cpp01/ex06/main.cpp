/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/26 17:41:48 by hclaude           #+#    #+#             */
/*   Updated: 2024/10/26 19:04:37 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char **argv)
{
	if (argc != 2){
		std::cerr << "wrong number of arguments" << std::endl; return (1);}
	std::string	level = argv[1];
	Harl harl;

	harl.complain(level);
}