/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/05 16:24:55 by hclaude           #+#    #+#             */
/*   Updated: 2025/05/12 16:34:33 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/Base.hpp"
#include "includes/A.hpp"
#include "includes/B.hpp"
#include "includes/C.hpp"
#include <iostream>
#include <ctime>
#include <cstdlib>

Base* generate(void)
{
	srand(time(0));
	int random = rand() % 3;
	if (random == 0)
	{
		std::cout << "generate A..." << std::endl;
		return static_cast<A*>(new A());
	}
	else if (random == 1)
	{
		std::cout << "generate B..." << std::endl;
		return static_cast<B*>(new B());
	}
	else
	{
		std::cout << "generate C..." << std::endl;
		return static_cast<C*>(new C());
	}
}

void identify(Base* p)
{
	if (!p)
	{
		std::cout << "Null pointer" << std::endl;
		return;
	}
	if (dynamic_cast<A*>(p))
		std::cout << "A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "C" << std::endl;
	else
		std::cout << "Unknown type" << std::endl;
}

void identify(Base& p)
{
	try
	{
		(void)dynamic_cast<A&>(p);
		std::cout << "A" << std::endl;
		return;
	}
	catch(const std::exception& e)
	{
	}

	try
	{
		(void)dynamic_cast<B&>(p);
		std::cout << "B" << std::endl;
		return;
	}
	catch(const std::exception& e)
	{
	}

	try
	{
		(void)dynamic_cast<C&>(p);
		std::cout << "C" << std::endl;
		return;
	}
	catch(const std::exception& e)
	{
	}

	std::cout << "Unknown type" << std::endl;
}

int main()
{
	{
		std::cout << "Test 1" << std::endl;
		Base* base = generate();
		identify(base);
		identify(*base);
		delete base;
		std::cout << std::endl;
	}
	{
		std::cout << "Test 2" << std::endl;
		Base* base = new Base();
		identify(base);
		identify(*base);
		delete base;
	}
}