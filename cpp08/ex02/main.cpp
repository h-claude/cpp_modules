/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 22:44:22 by hclaude           #+#    #+#             */
/*   Updated: 2025/06/10 18:33:30 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>

int main()
{
	{
		std::cout << "MutantStack<int> example:" << std::endl;
		MutantStack<int> mstack;
		mstack.push(5);
		mstack.push(17);
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		std::cout << mstack.size() << std::endl;
		mstack.push(3);
		mstack.push(5);
		mstack.push(737);
		mstack.push(0);
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}
	{
		std::cout << "\nList<int> example:" << std::endl;
		std::list<int> lst;
		lst.push_back(5);
		lst.push_back(17);
		std::cout << lst.back() << std::endl;
		lst.pop_back();
		std::cout << lst.size() << std::endl;
		lst.push_back(3);
		lst.push_back(5);
		lst.push_back(737);
		lst.push_back(0);
		std::list<int>::iterator it = lst.begin();
		std::list<int>::iterator ite = lst.end();
		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::list<int> s(lst);
	}
	{
		std::cout << "\nMutantStack<std::string> example:" << std::endl;
		MutantStack<std::string> mstack;
		mstack.push("Hello");
		mstack.push("World");
		std::cout << mstack.top() << std::endl;
		mstack.pop();
		mstack.push("Rayan");
		mstack.push("Cherki");
		std::cout << mstack.size() << std::endl;
		MutantStack<std::string>::const_iterator it = mstack.begin();
		MutantStack<std::string>::const_iterator ite = mstack.end();
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}
	{
		std::cout << "\nMutantStack<double> reverse iteration example:" << std::endl;
		MutantStack<double> mstack;

		mstack.push(1.1);
		mstack.push(2.2);
		mstack.push(3.3);
		mstack.push(4.4);
		mstack.push(5.5);

		MutantStack<double>::reverse_iterator rit = mstack.rbegin();
		MutantStack<double>::reverse_iterator rite = mstack.rend();

		for (; rit != rite; ++rit)
		{
			std::cout << *rit << std::endl;
			*rit += 1.0;
		}

		std::stack<double> s(mstack);
		std::cout << "Size of the stack: " << s.size() << std::endl;
		std::cout << "Top element of the stack: " << s.top() << std::endl;
		s.pop();
		std::cout << "Size of the stack after pop: " << s.size() << std::endl;
	}
	return 0;
}