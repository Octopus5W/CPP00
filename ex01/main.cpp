/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 21:18:32 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/05/27 19:47:32 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
std::string format(std::string str)
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

int main (void)
{
	PhoneBook phonebook;
	std::string cmd;
	
	phonebook.i_contact = 0;
	while (1)
	{
		std::cout<< "Type ADD, SEARCH or EXIT" << std::endl;
		std::cin >> cmd;
		if (cmd == "EXIT")
			return ((std::cout << "Goodbye !" << std::endl), 0);
		else if (cmd == "ADD")
		{
			if (phonebook.i_contact == 8)
				phonebook.i_contact = 0;
			do {
				std::cout<< "Type Firstname: " << std::endl;;
			} while (!(std::cin >> phonebook.contact[phonebook.i_contact].firstname));
			do {
				std::cout<< "Type Lastname: " << std::endl;;
			} while (!(std::cin >> phonebook.contact[phonebook.i_contact].lastname));
			do {
				std::cout<< "Type Nickname: " << std::endl;;
			} while (!(std::cin >> phonebook.contact[phonebook.i_contact].nickname));
			do {
				std::cout<< "Type Phone Number: " << std::endl;;
			} while (!(std::cin >> phonebook.contact[phonebook.i_contact].phone_number));
			do {
				std::cout<< "Type Darkest Secret: " << std::endl;;
			} while (!(std::cin >> phonebook.contact[phonebook.i_contact].darkest_secret));
			phonebook.i_contact++;
			if (phonebook.i_contact == 8)
				std::cout << "PhoneBook is full, you will overwrite the first contact." << std::endl;
			else
				std::cout << "Contact added successfully!" << std::endl;
		}
		else if (cmd == "SEARCH")
		{
			if (phonebook.i_contact == 0)
				std::cout << "No contacts available. Please add a contact first." << std::endl;
			else
			{
				for (int i = 0; i < phonebook.i_contact; i++)
				{
					std::cout << " ===========================================" << std::endl;
					std::cout << "|INDEX     |FIRSTNAME |LASTNAME  |NICKNAME  |" << std::endl;
					std::cout << " ===========================================" << std::endl;
					std::cout << "|         " << i + 1 << "|" << format(phonebook.contact[i].firstname) << "|"
					          << format(phonebook.contact[i].lastname) << "|"
					          << format(phonebook.contact[i].nickname) << "|" << std::endl;
					std::cout << " ===========================================" << std::endl;	  
				}
				std::cout << "Choose an index." << std::endl;
				do
				{
					std::cin >> cmd;
					if (cmd.length() == 1 && cmd.find_first_not_of("12345678") == -1 && phonebook.contact[stoi(cmd) - 1].firstname.length() > 0)
					{
						std::cout << "Firstname:    " << phonebook.contact[stoi(cmd) - 1].firstname << std::endl;	  
						std::cout << "Lastname:     " << phonebook.contact[stoi(cmd) - 1].lastname << std::endl;	  
						std::cout << "Nickname:     " << phonebook.contact[stoi(cmd) - 1].nickname << std::endl;	  
						std::cout << "Phone Number: " << phonebook.contact[stoi(cmd) - 1].phone_number << std::endl;	  
						std::cout << "Dark Secret:  " << phonebook.contact[stoi(cmd) - 1].darkest_secret << std::endl;
						break;
					}	
					std::cout << "Your input is wrong!\nChoose an INDEX or Put EXIT." << std::endl;
				} while (cmd != "EXIT");
			}
		}
		else
			std::cout << "Invalid command. Please type ADD, SEARCH or EXIT." << std::endl;
		
	}
}