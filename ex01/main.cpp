/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 21:18:32 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/05/31 18:05:36 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main (void)
{
	PhoneBook phonebook;
	std::string input;
	
	while (1)
	{
		std::cout<< "Type ADD, SEARCH or EXIT" << std::endl;
		std::cin >> input;
		if (input == "EXIT")
			return ((std::cout << "Goodbye !" << std::endl), 0);
		else if (input == "ADD")
			phonebook.ADD();
		else if (input == "SEARCH")
			phonebook.SEARCH();
		else
			std::cout << "Invalid command. Please type ADD, SEARCH or EXIT." << std::endl;
	}
}