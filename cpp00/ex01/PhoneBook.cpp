/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hclaude <hclaude@student.42mulhouse.fr>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/20 00:17:43 by hclaude           #+#    #+#             */
/*   Updated: 2024/10/22 22:04:43 by hclaude          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	_older = 0;
	_index = 0;
	_nb_contact = 0;
}

PhoneBook::~PhoneBook()
{
}

std::string get_content()
{
	std::string content;

	while (1)
	{
		std::getline(std::cin, content, '\n');
		if (content.empty())
		{
			std::cout << "Empty input. Please retry !" << std::endl << std::endl;
			std::cin.clear();
		}
		else
			return (content);
	}
}

void	PhoneBook::add_contact()
{
	if (_index > 7)
	{
		_index = _older;
		_older++;
		if (_older >= 7)
			_older = 0;
	}
	(_nb_contact < 8) ? _nb_contact++ : 0;
	std::string content;
	std::cout << "Put the First name :" << std::endl;
	content = get_content();
	this->_phonebook[_index].set_firstname(content);
	std::cout << "Put the last name :" << std::endl;
	content = get_content();
	this->_phonebook[_index].set_lastname(content);
	std::cout << "Put the nick name :" << std::endl;
	content = get_content();
	this->_phonebook[_index].set_nickname(content);
	std::cout << "Put the number phone :" << std::endl;
	content = get_content();
	this->_phonebook[_index].set_phone_number(content);
	std::cout << "Put the darkest secret :" << std::endl;
	content = get_content();
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

void	PhoneBook::search_contact()
{
	std::cout << std::setw(5) << "Index" << " | "
			  << std::setw(15) << "First name" << " | "
			  << std::setw(15) << "Last name" << " | "
			  << std::setw(15) << "Nick name" << " | " << std::endl;
	for (int i = 0; i < this->_nb_contact; i++)
	{
		std::string firstname = _phonebook[i].get_firstname();
		if (firstname.size() > 10)
			firstname = firstname.substr(0, 9) + ".";
		std::string lastname = _phonebook[i].get_lastname();
		if (lastname.size() > 10)
			lastname = lastname.substr(0, 9) + ".";
		std::string nickname = _phonebook[i].get_nickname();
		if (nickname.size() > 10)
			nickname = nickname.substr(0, 9) + ".";
		std::cout << std::setw(5) << i + 1 << " | "
				<< std::setw(15) <<  firstname << " | "
				<< std::setw(15) << lastname << " | "
				<< std::setw(15) << nickname << " | " << std::endl << std::endl;
	}
	std::cout << "Put the index of the contact you want to see :" << std::endl;
	int i;
	std::cin >> i;
	if (std::cin.fail())
	{
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		return ;
	}
	if (std::cin.good() && i >= 0 && i <= _nb_contact)
	{
		std::cout << "First name : " << _phonebook[i - 1].get_firstname() << std::endl;
		std::cout << "Last name : " << _phonebook[i - 1].get_lastname() << std::endl;
		std::cout << "Nick name : " << _phonebook[i - 1].get_nickname() << std::endl;
		std::cout << "Phone number : " << _phonebook[i - 1].get_phone_number() << std::endl;
		std::cout << "Darkest secret : " << _phonebook[i - 1].get_darkest_secret() << std::endl << std::endl;
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		return ;
	}
	else
	{
		std::cout << "Index out of range" << std::endl;
		std::cin.clear();
		std::cin.ignore(10000, '\n');
		return ;
	}
}
