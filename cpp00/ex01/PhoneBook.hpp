/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 00:17:52 by hclaude           #+#    #+#             */
/*   Updated: 2024/10/20 18:49:15 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP

# define PHONEBOOK_HPP

#include "Contact.hpp"
#include <iostream>
#include <string>

class PhoneBook
{
	public :

		void		add_contact(PhoneBook &phonebook);
		void		remove_contact(PhoneBook &phonebook, int index);
		void		search_contact(PhoneBook &phonebook, int index);
		
	private :

		int			number_of_contact;
		int			older;
		Contact		phonebook[8];
};

#endif

