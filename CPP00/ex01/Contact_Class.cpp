/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact_Class.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 09:50:51 by alienard          #+#    #+#             */
/*   Updated: 2021/02/08 14:04:42 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

Contact_Class::Contact_Class( void ){

	Contact_Class::_nbContacts += 1;
	// std::cout << Contact_Class::getNbContacts() << std::endl;
	return ;
}

Contact_Class::~Contact_Class( void ){
	// std::cout << "destructed" << std::endl;
}

int				Contact_Class::getNbContacts( void ){
	return Contact_Class::_nbContacts;
}

std::string		Contact_Class::getData( int i ){
	return this->_data[i];
}

void			Contact_Class::setData( int i, std::string str ){
	this->_data[i] = str;
	return ;
}

int				Contact_Class::_nbContacts = 0;