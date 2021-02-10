/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_Class.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 13:55:38 by alienard          #+#    #+#             */
/*   Updated: 2021/02/08 15:11:49 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

std::string		PhoneBook_Class::getInfos( int i ){
	return this->_infos[i];
}

std::string		PhoneBook_Class::getMenu( int i ){
	return this->_menu[i];
}

int				PhoneBook_Class::getNbContacts( void ){
	return this->_nb_contacts;
}

void			PhoneBook_Class::increm_NbContacts( void ){
	this->_nb_contacts += 1;
	return ;
}

void			PhoneBook_Class::set_input( std::string str ) {
	this->_input = str;
}

std::string		PhoneBook_Class::get_input( void ) {
	return this->_input ;
}

void			PhoneBook_Class::print_Contact( int j ){
	for (int i = 0; i < 11; i++){
		std::cout << this->_infos[i] << " : " << this->_contacts[j].getData(i) << std::endl;
	}
}

void			PhoneBook_Class::add_Contact( void ){
	std::string	tmp;

	for (int j = 0; j < 11; j++){
		std::cout << this->getInfos(j) << std::endl;
		std::getline(std::cin, tmp);
		this->set_input(tmp);
		this->_contacts[this->getNbContacts()].setData(j, this->get_input());
		if (std::cin.eof())
			break ;
	}
	this->increm_NbContacts();
}

Contact_Class	PhoneBook_Class::getContact( int i ){
	return this->_contacts[i];
}

PhoneBook_Class::PhoneBook_Class(/* args */)
{
	this->_menu[0] = "What do you want to do ?";
	this->_menu[1] = "- ADD";
	this->_menu[2] = "- SEARCH";
	this->_menu[3] = "- EXIT";
	this->_infos[0] = "first_name";
	this->_infos[1] = "last_name";
	this->_infos[2] = "nickname";
	this->_infos[3] = "login";
	this->_infos[4] = "postal_address";
	this->_infos[5] = "email_address";
	this->_infos[6] = "phone_number";
	this->_infos[7] = "birthday_date";
	this->_infos[8] = "favorite_meal";
	this->_infos[9] = "underwear_color";
	this->_infos[10] = "darkest_secret";
}

PhoneBook_Class::~PhoneBook_Class()
{
}

int				PhoneBook_Class::_nb_contacts = 0;