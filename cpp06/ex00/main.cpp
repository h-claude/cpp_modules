/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 23:23:12 by hclaude           #+#    #+#             */
/*   Updated: 2025/04/27 23:26:06 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ScalarConverter.hpp"

int main(int argc, char **argv)
{
	if (argc != 2)
		return 1;

	std::string input(argv[1]);
	ScalarConverter::convert(input);
}