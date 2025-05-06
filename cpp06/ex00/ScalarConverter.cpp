/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 22:33:27 by hclaude           #+#    #+#             */
/*   Updated: 2025/04/30 14:49:07 by hclaude          ###   ########.fr       */
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
	if (!str.empty() && str[str.size() - 1] == 'f')
	{
		std::string	str_withoutF = str.substr(0, str.size() - 1);
		std::istringstream iss(str_withoutF);
		float	value;
		return ((iss >> value) && (iss.eof()));
	}
	return (false);
}

bool	isDouble(std::string& str)
{
	std::istringstream iss(str);
	double	value;

	return (iss >> value) && (iss.eof());
}

bool	isInt(std::string& str)
{
	std::istringstream iss(str);
	int	value;

	return (iss >> value) && (iss.eof());
}

void	print_int(std::string& str)
{
	std::istringstream	iss(str);
	int					value;
	bool				printable;

	printable = true;
	if (!(iss >> value) || !iss.eof())
		printable = false;

	// CHAR
	if (value < 32 || value > 126)
		std::cout << "char: Non displayable" << std::endl;
	else if (printable == true)
		std::cout << "char: " << static_cast<char>(value) << std::endl;

	// INT
	if (printable)
		std::cout << "int: " << value << std::endl;
	else
		std::cout << "int: impossible" << std::endl;

	// FLOAT
	if (printable)
		std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(value) << "f" << std::endl;
	else
		std::cout << "float: impossible" << std::endl;

	// DOUBLE
	if (printable)
		std::cout << std::fixed << std::setprecision(1) << "double: " << static_cast<double>(value) << std::endl;
	else
		std::cout << "double: impossible" << std::endl;
}

void	print_float(std::string& str)
{
	std::string	str_withoutF = str.substr(0, str.size() - 1);
	std::istringstream iss(str_withoutF);

	float				value;
	bool				printable;

	printable = true;
	if (!(iss >> value) || !iss.eof())
		printable = false;

	std::cout << "float" << std::endl;

	// char
	if (value < 32 || value > 126)
		std::cout << "char: Non displayable" << std::endl;
	else if (printable == true)
		std::cout << "char: " << static_cast<char>(value) << std::endl;

	// INT
	if (printable)
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;

	// FLOAT
	if (printable)
		std::cout << std::fixed << std::setprecision(1) << "float: " << value << "f" << std::endl;
	else
		std::cout << "float: impossible" << std::endl;

	// DOUBLE
	if (printable)
		std::cout << std::fixed << std::setprecision(1) << "double: " << static_cast<double>(value) << std::endl;
	else
		std::cout << "double: impossible" << std::endl;
}

void ScalarConverter::convert(std::string& str)
{
	// connard de fonction interdite
	if (isInt(str))
	{
		print_int(str);
	}
	else if (isFloat(str))
	{
		print_float(str);
	}
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
