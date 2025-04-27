/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 11:56:49 by hclaude           #+#    #+#             */
/*   Updated: 2025/04/27 19:37:49 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
	{
		try
		{
			Form formb(25,25,"formb");
			std::cout << formb << std::endl;
			Bureaucrat alain("alain", 1);
			alain.signForm(formb);
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
			return (1);
		}
	}
	{
		try
		{
			Form formc(13, 53, "formc");

			Form forma(1, 1, "forma");

			std::cout << formc << std::endl;
			std::cout << forma << std::endl;
			Bureaucrat	Alain("Alain", 13);
			Alain.signForm(formc);
			Alain.signForm(forma);
			forma = formc;
			std::cout << forma << std::endl;
			std::cout << formc << std::endl;
			Form formd(forma);
			std::cout << formd << std::endl;
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
			return (1);
		}
	}

}