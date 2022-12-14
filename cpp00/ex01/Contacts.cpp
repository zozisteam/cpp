/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 12:24:32 by alalmazr          #+#    #+#             */
/*   Updated: 2022/12/07 16:16:01 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"


Contact::Contact () {}

Contact::~Contact () {}

//-----SETTERS-----
void Contact::setfName(std::string fName)
{
    this->fName = fName;
}

void Contact::setlName(std::string lName)
{
	this->lName = lName; 
}

void Contact::setNickname(std::string nickName)
{
	this->nickName = nickName;
}

void Contact::setPhoneNum(std::string num)
{
	this->phoneNumber = num;
}

void Contact::setSecret(std::string secret)
{
	this->secret = secret;
}

//-----GETTERS-----
std::string Contact::getfName()
{
	return(this->fName);
}

std::string Contact::getlName()
{
   return(this->lName);
}

std::string Contact::getNickname()
{
   return(this->nickName);
}

std::string Contact::getPhoneNum()
{
   return(this->phoneNumber);
}

std::string Contact::getSecret()
{
   return(this->secret);
}
