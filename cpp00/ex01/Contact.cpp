/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 00:21:16 by hclaude           #+#    #+#             */
/*   Updated: 2024/10/21 18:41:39 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
	std::cout << "Class created" << std::endl;
}

Contact::~Contact()
{
	std::cout << "Class Destroyed" << std::endl;
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

void	Contact::print_contact()
{
	std::cout << this->_first_name;
	std::cout << " | ";
	std::cout << this->_last_name;
	std::cout << " | ";
	std::cout << this->_nickname;
	std::cout << " | ";
	std::cout << this->_phone_number;
	std::cout << " | ";
	std::cout << this->_darkest_secret;
	std::cout << std::endl;
}
