/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 00:21:16 by hclaude           #+#    #+#             */
/*   Updated: 2024/10/21 17:23:23 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

void	Contact::set_firstname(std::string firstname, Contact &contact)
{
	this->_first_name = firstname;
}

void	Contact::set_lastname(std::string lastname, Contact &contact)
{
	this->_last_name = lastname;
}

void	Contact::set_nickname(std::string nickname, Contact &contact)
{
	this->_nickname = nickname;
}

void	Contact::set_phone_number(std::string phone_number, Contact &contact)
{
	this->_phone_number = phone_number;
}

void	Contact::set_darkest_secret(std::string darkest_secret, Contact &contact)
{
	this->_darkest_secret = darkest_secret;
}

void	Contact::remove_firstname(Contact &contact)
{
	this->_first_name.clear();
}

void	Contact::remove_lastname(Contact &contact)
{
	this->_last_name.clear();
}

void	Contact::remove_nickname(Contact &contact)
{
	this->_nickname.clear();
}

void	Contact::remove_phone_number(Contact &contact)
{
	this->_phone_number.clear();
}

void	Contact::remove_darkest_secret(Contact &contact)
{
	this->_darkest_secret.clear();
}

void	Contact::print_contact(Contact &contact)
{
	
}
