/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 00:22:51 by hclaude           #+#    #+#             */
/*   Updated: 2024/10/22 17:38:07 by hclaude          ###   ########.fr       */
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
		void			set_firstname(std::string firstname);
		void			set_lastname(std::string lastname);
		void			set_nickname(std::string nickname);
		void			set_phone_number(std::string phone_number);
		void			set_darkest_secret(std::string darkest_secret);
		void			remove_firstname();
		void			remove_lastname();
		void			remove_nickname();
		void			remove_phone_number();
		void			remove_darkest_secret();
		std::string		get_firstname() const;
		std::string		get_lastname() const;
		std::string		get_nickname() const;
		std::string		get_phone_number() const;
		std::string		get_darkest_secret() const;

	private :

		std::string	_first_name;
		std::string	_last_name;
		std::string	_nickname;
		std::string	_phone_number;
		std::string	_darkest_secret;
};

#endif