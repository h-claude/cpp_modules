/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 22:33:27 by hclaude           #+#    #+#             */
/*   Updated: 2025/05/09 14:58:50 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(const ScalarConverter& cpy){*this = cpy;}

ScalarConverter::~ScalarConverter(){}

ScalarConverter& ScalarConverter::operator=(const ScalarConverter& src)
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

bool	isChar(std::string& str)
{
	if (str.size() == 1 && isprint(str[0]))
		return (true);
	return (false);
}

bool	isSpecial(std::string& str)
{
	if (str == "nan" || str == "nanf" || str == "+inf" || str == "-inf" || str == "+inff" || str == "-inff")
		return (true);
	return (false);
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
	if (value < 0 || value > 127)
		std::cout << "char: impossible" << std::endl;
	else if (printable == true && isprint(static_cast<char>(value)))
		std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
	else
	{
		std::cout << "char: Non displayable" << std::endl;
	}

	// INT
	if (printable && value >= std::numeric_limits<int>::min() && value <= std::numeric_limits<int>::max())
		std::cout << "int: " << value << std::endl;
	else
		std::cout << "int: impossible" << std::endl;

	// FLOAT
	if (printable && value >= std::numeric_limits<float>::lowest() && value <= std::numeric_limits<float>::max())
		std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(value) << "f" << std::endl;
	else
		std::cout << "float: impossible" << std::endl;

	// DOUBLE
	if (printable && value >= std::numeric_limits<double>::lowest() && value <= std::numeric_limits<double>::max())
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

	// char
	if (value < 0 || value > 127)
		std::cout << "char: impossible" << std::endl;
	else if (printable == true && isprint(static_cast<char>(value)))
		std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
	else
	{
		std::cout << "char: Non displayable" << std::endl;
	}

	// INT
	if (printable && value >= std::numeric_limits<int>::min() && value <= std::numeric_limits<int>::max())
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;

	// FLOAT
	if (printable && value >= std::numeric_limits<float>::lowest() && value <= std::numeric_limits<float>::max())
		std::cout << std::fixed << std::setprecision(1) << "float: " << value << "f" << std::endl;
	else
		std::cout << "float: impossible" << std::endl;

	// DOUBLE
	if (printable && value >= std::numeric_limits<double>::lowest() && value <= std::numeric_limits<double>::max())
		std::cout << std::fixed << std::setprecision(1) << "double: " << static_cast<double>(value) << std::endl;
	else
		std::cout << "double: impossible" << std::endl;
}

void	print_double(std::string& str)
{
	std::istringstream iss(str);
	double				value;
	bool				printable;

	printable = true;
	if (!(iss >> value) || !iss.eof())
		printable = false;

	// char
	if (value < 0 || value > 127)
		std::cout << "char: impossible" << std::endl;
	else if (printable == true && isprint(static_cast<char>(value)))
		std::cout << "char: '" << static_cast<char>(value) << "'" << std::endl;
	else
	{
		std::cout << "char: Non displayable" << std::endl;
	}

	// INT
	if (printable && value >= std::numeric_limits<int>::min() && value <= std::numeric_limits<int>::max())
		std::cout << "int: " << static_cast<int>(value) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;

	// FLOAT
	if (printable && value >= std::numeric_limits<float>::lowest() && value <= std::numeric_limits<float>::max())
		std::cout << std::fixed << std::setprecision(1) << "float: " << static_cast<float>(value) << "f" << std::endl;
	else
		std::cout << "float: impossible" << std::endl;

	// DOUBLE
	if (printable && value >= std::numeric_limits<double>::lowest() && value <= std::numeric_limits<double>::max())
		std::cout << std::fixed << std::setprecision(1) << "double: " << value << std::endl;
	else
		std::cout << "double: impossible" << std::endl;
}

void	print_char(std::string& str)
{
	std::cout << "char: '" << str[0] << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(str[0]) << std::endl;
	std::cout << "float: " << static_cast<float>(str[0]) << "f" << std::endl;
	std::cout << "double: " << static_cast<double>(str[0]) << std::endl;
}

void	print_special(std::string& str)
{
	std::cout << "char: impossible" << std::endl;
	std::cout << "int: impossible" << std::endl;
	if (str == "nan" || str == "nanf")
	{
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
		return ;
	}
	if (str == "+inf" || str == "-inf")
	{
		std::cout << "float: " << str << "f" << std::endl;
		std::cout << "double: " << str << std::endl;
		return ;
	}
	else if (str == "+inff" || str == "-inff")
	{
		std::cout << "float: " << str << std::endl;
		std::cout << "double: " << str.substr(0, str.size() - 1) << std::endl;
		return ;
	}
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
	else if (isDouble(str))
	{
		print_double(str);
	}
	else if (isChar(str))
	{
		print_char(str);
	}
	else if (isSpecial(str))
	{
		print_special(str);
	}
	else
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
		return ;
	}
}
