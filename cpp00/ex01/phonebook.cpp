/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 11:27:37 by alalmazr          #+#    #+#             */
/*   Updated: 2022/12/07 16:30:53 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <iostream>
#include <string>
#include <iomanip>


PhoneBook::PhoneBook()
{
	this->index = 0;
	return;
}

PhoneBook::~PhoneBook()
{}


void PhoneBook::phoneBookAdd()
{
	std::string poop;

	std::cout << "=============================================" << std::endl;
	std::cout << "enter first name" << std::endl;
	std::cout << ": ";
	std::cin >> poop;
	this->contacts[this->index].setfName(poop);

	std::cout << "enter last name" << std::endl;
	std::cout << ": ";
	std::cin >> poop;
	this->contacts[this->index].setlName(poop);

	std::cout << "enter nickname" << std::endl;
	std::cout << ": ";
	std::cin >> poop;
	this->contacts[this->index].setNickname(poop);

	std::cout << "enter phone number" << std::endl;
	std::cout << ": ";
	std::cin >> poop;
	this->contacts[this->index].setPhoneNum(poop);

	std::cout << "enter darkest secret" << std::endl;
	std::cout << ": ";
	std::cin >> poop;
	this->contacts[this->index].setSecret(poop);

	this->index = (index + 1) % 8;
	std::cout << std::endl;
	std::cout << "contact added!" << std::endl;
	std::cout << "=============================================" << std::endl;
	return;
}

std::string check_size(std::string str)
{
	if (str.length() > 10)
	{
		std::string shorter = str;
		shorter.resize(8);
		shorter.append(".");
		return (shorter);
	}
	return (str);
}

void	displayContact(Contact contact, int index)
{
	std::cout << "=============================================" << std::endl;
	std::cout << "[" << index + 1 << "]" << std::endl << std::endl;
	std::cout << "first name    : " << std::right << contact.getfName() << std::endl;
	std::cout << "last name     : " << std::right << contact.getlName() << std::endl;
	std::cout << "nickname      : " << std::right << contact.getNickname() << std::endl;
	std::cout << "phone number  : " << std::right << contact.getPhoneNum() << std::endl;
	std::cout << "darkest secret: " << std::right << contact.getSecret() << std::endl << std::endl;
	std::cout << "=============================================" << std::endl;

}

void PhoneBook::phoneBookSearch()
{
	std::cout << "=============================================" << std::endl;
 	std::cout << std::right << std::setw(10) << "index" << "|" << std::setw(10) << "firstname" << "|" << std::setw(10) << "lastname" << "|" << std::setw(10) << "nickname" << std::endl;
	for (int i = 0; i < 8; i++)
	{
        std::cout << std::right << std::setw(10) << i + 1 << "|";
       	std::cout << std::right << std::setw(10) << check_size(this->contacts[i].getfName()) << "|";
        std::cout << std::right << std::setw(10) << check_size(this->contacts[i].getlName()) << "|";
        std::cout << std::right << std::setw(10) << check_size(this->contacts[i].getNickname()) << std::endl;
	}
	std::cout << "=============================================" << std::endl;
	
	//----------enter index to display--------------
	int index;
	std::cout << "enter contact index" << std::endl;
	std::cout << ": ";
	std::cin >> index;
	if (index > 8 || index < 1)
		std::cout << "error.. no such contact" << std::endl;
	else
		displayContact(this->contacts[index-1], index-1);
}

void PhoneBook::phoneBookExit()
{
	std::cout << ".............." << std::endl;
	std::cout << "thank u!.. ur phone book is deleted!..." << std::endl;
	std::cout << "bye!!..." << std::endl;
	std::cout << ".............." << std::endl;
}

