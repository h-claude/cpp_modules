/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 00:21:16 by hclaude           #+#    #+#             */
/*   Updated: 2024/10/22 17:38:32 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
}

Contact::~Contact()
{
}

void	Contact::set_firstname(std::string firstname)
{
	this->_first_name = firstname;
}

void	Contact::set_lastname(std::string lastname)
{
	this->_last_name = lastname;
}

void	Contact::set_nickname(std::string nickname)
{
	this->_nickname = nickname;
}

void	Contact::set_phone_number(std::string phone_number)
{
	this->_phone_number = phone_number;
}

void	Contact::set_darkest_secret(std::string darkest_secret)
{
	this->_darkest_secret = darkest_secret;
}

void	Contact::remove_firstname()
{
	this->_first_name.clear();
}

void	Contact::remove_lastname()
{
	this->_last_name.clear();
}

void	Contact::remove_nickname()
{
	this->_nickname.clear();
}

void	Contact::remove_phone_number()
{
	this->_phone_number.clear();
}

void	Contact::remove_darkest_secret()
{
	this->_darkest_secret.clear();
}

std::string	Contact::get_firstname() const
{
	return this->_first_name;
}

std::string	Contact::get_lastname() const
{
	return this->_last_name;
}

std::string	Contact::get_nickname() const
{
	return this->_nickname;
}

std::string	Contact::get_phone_number() const
{
	return this->_phone_number;
}

std::string	Contact::get_darkest_secret() const
{
	return this->_darkest_secret;
}