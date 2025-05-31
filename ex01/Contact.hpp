/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/19 20:35:50 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/05/31 03:11:09 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>

class Contact{
	
	private:
		std::string _firstname;
		std::string _lastname;
		std::string _nickname;
		std::string _phone_number;
		std::string _darkest_secret;
	public:
		Contact();
		~Contact();
		Contact(const Contact &copy);
		Contact &operator=(const Contact &other);
		std::string get_FirstName();
		std::string get_LastName();
		std::string get_NickName();
		std::string get_PhoneNumber();
		std::string get_DarkSecret();
		void set_FirstName(std::string firstname);
		void set_LastName(std::string lastname);
		void set_NickName(std::string nickname);
		void set_PhoneNumber(std::string phonenumber);
		void set_DarkSecret(std::string darksecret);

		
};

#endif