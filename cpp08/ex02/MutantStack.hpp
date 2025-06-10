/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/09 22:44:24 by hclaude           #+#    #+#             */
/*   Updated: 2025/06/10 18:27:55 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <iterator>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T>
{
	public :

		MutantStack(void) : std::stack<T>() {}
		MutantStack(const MutantStack &src) : std::stack<T>(src) {}
		~MutantStack(void) {}

		MutantStack &operator=(const MutantStack &rhs)
		{
			if (this != &rhs)
				std::stack<T>::operator=(rhs);
			return *this;
		}

		typedef typename std::stack<T>::container_type::iterator iterator;
		typedef typename std::stack<T>::container_type::const_iterator const_iterator;
		typedef typename std::stack<T>::container_type::reverse_iterator reverse_iterator;
		typedef typename std::stack<T>::container_type::const_reverse_iterator const_reverse_iterator;

		iterator begin(void)
		{
			return std::stack<T>::c.begin();
		}
		iterator end(void)
		{
			return std::stack<T>::c.end();
		}

		const_iterator begin(void) const
		{
			return std::stack<T>::c.begin();
		}
		const_iterator end(void) const
		{
			return std::stack<T>::c.end();
		}

		reverse_iterator rbegin(void)
		{
			return std::stack<T>::c.rbegin();
		}
		reverse_iterator rend(void)
		{
			return std::stack<T>::c.rend();
		}

		const_reverse_iterator rbegin(void) const
		{
			return std::stack<T>::c.rbegin();
		}
		const_reverse_iterator rend(void) const
		{
			return std::stack<T>::c.rend();
		}

};

#endif