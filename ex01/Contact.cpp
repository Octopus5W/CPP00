/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 03:39:31 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/06/11 21:10:39 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact () {}

Contact::~Contact() {}

Contact::Contact(Contact const &copy) {}

Contact &Contact::operator=(const Contact &other) 
{
	return *this;
}

std::string Contact::get_FirstName()
{
	return this->_firstname;
}

std::string Contact::get_LastName()
{
	return this->_lastname;
}

std::string Contact::get_NickName()
{
	return this->_nickname;
}

std::string Contact::get_PhoneNumber()
{
	return this->_phone_number;
}

std::string Contact::get_DarkSecret()
{
	return this->_darkest_secret;
}

void Contact::set_FirstName(std::string firstname)
{
	this->_firstname = firstname;
}

void Contact::set_LastName(std::string lastname)
{
	this->_lastname = lastname;
}
void Contact::set_NickName(std::string  nickname)
{
	this->_nickname = nickname;
}
void Contact::set_PhoneNumber(std::string phonenumber)
{
	this->_phone_number = phonenumber;
}
void Contact::set_DarkSecret(std::string darksecret)
{
	this->_darkest_secret = darksecret;
}