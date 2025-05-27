/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hdelbecq <hdelbecq@student.s19.be>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/25 03:39:31 by hdelbecq          #+#    #+#             */
/*   Updated: 2025/05/26 16:49:44 by hdelbecq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact () : name("default")
{}

Contact::~Contact() {}

Contact::Contact(Contact const &copy) {}

Contact &Contact::operator=(const Contact &other) 
{
	return *this;
}