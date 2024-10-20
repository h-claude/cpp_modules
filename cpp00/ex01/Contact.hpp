/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 00:22:51 by hclaude           #+#    #+#             */
/*   Updated: 2024/10/20 18:50:14 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>

class Contact
{
	public :

		Contact();
		~Contact();
		void		set_firstname(std::string firsname, Contact &contact);
		void		set_lastname(std::string lastname, Contact &contact);
		void		set_nickname(std::string nickname, Contact &contact);
		void		set_phone_number(std::string phone_number, Contact &contact);
		void		set_darkest_secret(std::string darkest_secret, Contact &contact);
		void		remove_firstname(std::string firsname, Contact &contact);
		void		remove_lastname(std::string lastname, Contact &contact);
		void		remove_nickname(std::string nickname, Contact &contact);
		void		remove_phone_number(std::string phone_number, Contact &contact);
		void		remove_darkest_secret(std::string darkest_secret, Contact &contact);
		void		print_contact(Contact &contact);

	private :

		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
};

#endif