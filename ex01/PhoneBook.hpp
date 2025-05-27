/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 20:22:24 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/05/27 17:55:57 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOk_H
#define PHONEBOOk_H

#include "Contact.hpp"

class PhoneBook{

	private:
		
	public:
		PhoneBook();
		~PhoneBook();
		PhoneBook(const PhoneBook &copy);
		PhoneBook &operator=(const PhoneBook &other);
		Contact contact[8];
		int i_contact;
};

#endif