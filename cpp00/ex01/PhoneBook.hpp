/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 00:17:52 by hclaude           #+#    #+#             */
/*   Updated: 2024/10/22 20:44:51 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>

class PhoneBook
{
	public :

		PhoneBook();
		~PhoneBook();
		void		add_contact();
		void		remove_contact(int index);
		void		search_contact();

	private :

		int			_index;
		int			_older;
		int 		_nb_contact;
		Contact		_phonebook[8];
};

#endif

