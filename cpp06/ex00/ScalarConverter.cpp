/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 22:33:27 by hclaude           #+#    #+#             */
/*   Updated: 2025/04/27 23:59:48 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter& cpy){*this = cpy;}

ScalarConverter::~ScalarConverter(){}

ScalarConverter ScalarConverter::operator=(const ScalarConverter& src)
{
	if (this == &src)
		return (*this);
	return (*this);
}

bool	isFloat(std::string& str)
{
	try
	{
		float f = std::stof(str);
		f++;
		return (true);
	}
	catch (const std::exception& e)
	{
		return (false);
	}

}

bool	isDouble(std::string& str)
{
	try
	{
		double d = std::stod(str);
		d++;
		return (true);
	}
	catch(const std::exception& e)
	{
		return (false);
	}
}

bool	isInt(std::string& str)
{
	try
	{
		int i = std::stoi(str);
		i++;
		return true;
	}
	catch(const std::exception& e)
	{
		return false;
	}

}

void	print_int(std::string& str)
{
	// CHAR
	try
	{
		int	i = std::stoi(str);
		if (i >= 32 && i <= 126)
			std::cout << "char: Non displayable" << std::endl;
		else
			std::cout << "char: " << (char)i << std::endl;
	}
	catch(const std::out_of_range& e)
	{
		std::cout << "char: Non displayable" << std::endl;
	}
	// INT
	try
	{
		int i = std::stoi(str);
		std::cout << "int: " << i << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "int: impossible" << std::endl;
	}
	// FLOAT
	try
	{
		std::cout << "float: ";
		int i = std::stoi(str);
		std::cout << (float)i << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "impossible" << std::endl;
	}
	// DOUBLE
	try
	{
		std::cout << "double: ";
		int i = std::stoi(str);
		std::cout << (double)i << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << "impossible" << std::endl;
	}
}

void ScalarConverter::convert(std::string& str)
{
	// connard de fonction interdite 
	if (isInt(str))
	{
		print_int(str);
	}
	//else if (isFloat(str))
	//{
	//	print_float(str);
	//}
	//else if (isDouble(str))
	//{
	//	print_double(str);
	//}
	//else if (isChar(str))
	//{
	//	print_char(str);
	//}
	// faire truc special
}