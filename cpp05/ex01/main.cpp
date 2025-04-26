/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/26 11:56:49 by hclaude           #+#    #+#             */
/*   Updated: 2025/04/26 12:39:21 by hclaude          ###   ########.fr       */
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
			try
			{
				Bureaucrat alain("alain", 1);
				alain.signForm(formb);
			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
				return (1);
			}

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
			Form formc(1, 5, "formc");
			try
			{
				Form forma(13, 13, "forma");

				std::cout << formc << std::endl;
				std::cout << forma << std::endl;

				try
				{
					Bureaucrat	Alain("Alain", 1);
					Alain.signForm(formc);
					forma = formc;
					std::cout << forma << std::endl;
					std::cout << formc << std::endl;
					try
					{
						Form formd(forma);
						std::cout << formd << std::endl;
					}
					catch(const std::exception& e)
					{
						std::cerr << e.what() << std::endl;
					}
				}
				catch(const std::exception& e)
				{
					std::cerr << e.what() << std::endl;
				}

			}
			catch(const std::exception& e)
			{
				std::cerr << e.what() << std::endl;
				return (1);
			}
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << std::endl;
			return (1);
		}
	}

}