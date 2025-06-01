/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/21 16:56:13 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/06/01 02:49:35 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook () : _contact_iteration(0) {}

PhoneBook::~PhoneBook() {}

PhoneBook::PhoneBook(PhoneBook const &copy) : _contact_iteration(copy._contact_iteration), _contact(copy._contact) {}
	

PhoneBook &PhoneBook::operator=(const PhoneBook &other)
{
	if (this != &other)
	{
		this->_contact_iteration = other._contact_iteration;
	}
	return *this;
}

void PhoneBook::set_contact(Contact &contact)
{
	const std::string firstname = contact.get_FirstName();
	const std::string lastname = contact.get_LastName();
	const std::string nickname = contact.get_NickName();
	const std::string phonenumber = contact.get_PhoneNumber();
	const std::string darksecret = contact.get_DarkSecret();
	
	if (this->_contact_iteration == 8)
	{		
		_contact_iteration = 0;
		std::cout << "PhoneBook is full, you will overwrite the first contact." << std::endl;
	}
	this->_contact[this->_contact_iteration].set_FirstName(contact.get_FirstName());
	this->_contact[this->_contact_iteration].set_LastName(contact.get_LastName());
	this->_contact[this->_contact_iteration].set_NickName(contact.get_NickName());
	this->_contact[this->_contact_iteration].set_PhoneNumber(contact.get_PhoneNumber());
	this->_contact[this->_contact_iteration].set_DarkSecret(contact.get_DarkSecret());
	this->_contact_iteration++;
	std::cout << "Contact added successfully!" << std::endl;
}

int PhoneBook::check_i_contact()
{
	if (this->_contact_iteration == 0)
	{
		std::cout << "No contacts available. Please add a contact first." << std::endl;
		return 0;
	}
	else
		return this->_contact_iteration;
		
}

void PhoneBook::ADD()
{
	std::string input;
	Contact contact;
	
	while (input.empty()) {
		std::cout<< "Type Firstname: " << std::endl;
		std::cin >> input;
		if (input == "EXIT")
		{
			std::cout << "Exit succes !" << std::endl;
			return ;
		}
	}
	contact.set_FirstName(input);
	input.clear();
	
	while (input.empty()) {
		std::cout<< "Type Lastname: " << std::endl;
		std::cin >> input;
		if (input == "EXIT")
		{
			std::cout << "Exit succes !" << std::endl;
			return ;
		}
	}
	contact.set_LastName(input);
	input.clear();
	
	while (input.empty()) {
		std::cout<< "Type Nickname: " << std::endl;
		std::cin >> input;
		if (input == "EXIT")
		{
			std::cout << "Exit succes !" << std::endl;
			return ;
		}
	}
	contact.set_NickName(input);
	input.clear();
	
	while (input.empty()) {
		std::cout<< "Type Phone Number: " << std::endl;
		std::cin >> input;
		if (input == "EXIT")
		{
			std::cout << "Exit succes !" << std::endl;
			return ;
		}
	}
	contact.set_PhoneNumber(input);
	input.clear();
	
	while (input.empty()) {
		std::cout<< "Type Dark Secret: " << std::endl;
		std::cin >> input;
		if (input == "EXIT")
		{
			std::cout << "Exit succes !" << std::endl;
			return ;
		}
	}
	contact.set_DarkSecret(input);
	input.clear();
	this->set_contact(contact);
}

std::string PhoneBook::format(std::string str)
{
	if (str.length() > 10)
	{
		str.resize(10);
		str.replace(9, 1, ".");
	}
	else
		str.insert(0, 10 - str.length(), ' ');
	return (str);
}

Contact& PhoneBook::get_contact(int index)
{
	return this->_contact[index];
}

void PhoneBook::SEARCH()
{
	if (this->check_i_contact() == 0)
	return ;
	std::cout << " ===========================================" << std::endl;
	std::cout << "|INDEX     |FIRSTNAME |LASTNAME  |NICKNAME  |" << std::endl;
	std::cout << " ===========================================" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		if (this->get_contact(i).get_FirstName().empty())
		break;
		std::cout << "|         " << i + 1 << "|" 
		<< this->format(this->get_contact(i).get_FirstName())<< "|"
		<< this->format(this->get_contact(i).get_LastName())<< "|"
		<< this->format(this->get_contact(i).get_NickName())<< "|" << std::endl;
	}
	std::cout << " ===========================================" << std::endl;
	
	int i;
	std::string input;
	std::cout << "Choose an index." << std::endl;
	while (input.empty())
	{
		std::cin >> input;
		if (input.length() == 1 && input.find_first_not_of("12345678") == input.npos && (i = this->get_contact(stoi(input) - 1).get_FirstName().length()) > 0)
		{
			--i;
			std::cout << "Firstname:    " << this->get_contact(i).get_FirstName() << std::endl;	  
			std::cout << "Lastname:     " << this->get_contact(i).get_LastName() << std::endl;	  
			std::cout << "Nickname:     " << this->get_contact(i).get_NickName() << std::endl;	  
			std::cout << "Phone Number: " << this->get_contact(i).get_PhoneNumber() << std::endl;	  
			std::cout << "Dark Secret:  " << this->get_contact(i).get_DarkSecret() << std::endl;
			break;
		}
		else if (input == "EXIT")
		{
			std::cout << "Exit succes !" << std::endl;
			break;
		}
		else	
		{
			std::cout << "Your input is wrong!\nChoose an INDEX or Put EXIT." << std::endl;
			input.clear();
			std::cin.clear();
			std::cin.ignore();
		}
	};
}
