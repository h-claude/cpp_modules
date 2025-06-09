/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 16:18:36 by hclaude           #+#    #+#             */
/*   Updated: 2025/06/09 23:38:18 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <limits>
#include <stdexcept>
#include <ctime>
#include <algorithm>

class Span
{
	private :

		unsigned int		_maxInt;
		std::vector<int>	_v;
		Span(void);

	public:

		Span(unsigned int N);
		Span(const Span &src);
		~Span(void);
		Span &operator=(const Span &rhs);
		int					operator[](unsigned int index) const;

		void				addNumber(int n);
		int					shortestSpan(void) const;
		int					longestSpan(void) const;

		void				fillSpan();

};

#endif