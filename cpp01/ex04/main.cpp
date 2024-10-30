/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 18:04:31 by hclaude           #+#    #+#             */
/*   Updated: 2024/10/30 16:31:40 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void replace_string(std::ifstream& inputFile, std::ofstream& outputFile, std::string s1, std::string s2)
{
	std::string line;
	size_t		i_s1;
	size_t		len_s1;
	size_t		i = 0;

	len_s1 = s1.length();

	std::getline(inputFile, line);
	if (inputFile.eof())
	{
		std::cerr << "File is empty" << std::endl;
		return;
	}
	while (1)
	{
		i_s1 = line.find(s1);
		if (i_s1 == std::string::npos)
			outputFile << line;
		else
		{
			while (i < line.length())
			{
				if (i == i_s1)
					outputFile << s2, i += len_s1, i_s1 = line.find(s1, i);
				else
					outputFile << line[i], i++;
			}
		}
		if (std::getline(inputFile, line))
			outputFile << std::endl;
		else
			break;
		i = 0;
	}
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cerr << "Wrong number of arguments" << std::endl;
		return (1);
	}

	std::string filename;
	std::string	s1;
	std::string	s2;

	filename = argv[1];
	s1 = argv[2];
	s2 = argv[3];

	if (s1.empty())
	{
		std::cerr << "s1 is empty" << std::endl;
		return (1);
	}

	std::ifstream inputFile(filename.c_str());
	if (!inputFile.is_open() || inputFile.fail())
	{
		std::cerr << "Fail open" << std::endl;
		return (1);
	}

	std::string	outfileName = filename + ".replace";
	std::ofstream outFile(outfileName.c_str());
	if (outFile.fail())
	{
		inputFile.close();
		std::cerr << "Fail create outputfile" << std::endl;
		return (1);
	}

	replace_string(inputFile, outFile, s1, s2);

	inputFile.close();
	outFile.close();

	return (0);
}