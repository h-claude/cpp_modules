/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 00:17:43 by hclaude           #+#    #+#             */
/*   Updated: 2024/10/21 21:07:17 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	_older = 0;
	_index = 0;
}

PhoneBook::~PhoneBook()
{
	std::cout << "CHO BYE" << std::endl;
}

void	PhoneBook::add_contact()
{
	if (_index >= 7)
	{
		_index = _older;
		_older++;
		if (_older >= 7)
			_older = 0;
	}
	std::string content;
	std::cout << "Put the First name :" << std::endl;
	std::cin >> content;
	//std::cout << std::endl;
	this->_phonebook[_index].set_firstname(content);
	std::cout << "Put the last name :" << std::endl;
	std::cin >> content;
	this->_phonebook[_index].set_lastname(content);
	std::cout << "Put the nick name :" << std::endl;
	std::cin >> content;
	this->_phonebook[_index].set_nickname(content);
	std::cout << "Put the number phone :" << std::endl;
	std::cin >> content;
	this->_phonebook[_index].set_phone_number(content);
	std::cout << "Put the darkest secret :" << std::endl;
	std::cin >> content;
	this->_phonebook[_index].set_darkest_secret(content);
	_index++;
}

void	PhoneBook::remove_contact(int index)
{
	if (index > 8 || index < 1)
	{
		std::cout << "Index out of range" << std::endl;
		return ;
	}
	_phonebook[index].remove_darkest_secret();
	_phonebook[index].remove_firstname();
	_phonebook[index].remove_lastname();
	_phonebook[index].remove_nickname();
	_phonebook[index].remove_phone_number();
	std::cout << "Contact deleted" << std::endl;
}

void	PhoneBook::search_contact(int index)
{
	(void)index;
	std::cout << "PROUT" << std::endl;
}