/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/27 22:20:04 by hclaude           #+#    #+#             */
/*   Updated: 2025/04/27 23:27:39 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <stdexcept>
# include <limits>

class ScalarConverter
{
	private:

		ScalarConverter();
		ScalarConverter(const ScalarConverter& cpy);
		~ScalarConverter();

		ScalarConverter	operator=(const ScalarConverter& src);

	public:

		static void	convert(std::string& str);

};


#endif