/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 20:22:24 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/05/31 18:56:25 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOk_H
#define PHONEBOOk_H

#include "Contact.hpp"

class PhoneBook{

	private:
		Contact _contact[8];
		int _contact_iteration = 0;
		
	public:
		PhoneBook();
		~PhoneBook();
		PhoneBook(const PhoneBook &copy);
		PhoneBook &operator=(const PhoneBook &other);
		
		void ADD();
		int check_i_contact();
		void set_contact(Contact &contact);
		
		void SEARCH();
		std::string format(std::string str);
		Contact& get_contact(int index);
		
		void EXIT();

};

#endif