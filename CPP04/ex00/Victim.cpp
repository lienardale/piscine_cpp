/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:19:46 by alienard          #+#    #+#             */
/*   Updated: 2021/02/25 10:13:59 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"

Victim::Victim()
{
	if (PRINT)
		std::cout << "Constructor called" << std::endl;

}

Victim::Victim(std::string name) : _name(name){
	if (PRINT)
		std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim::~Victim()
{
	if (PRINT)
		std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;

}

Victim::Victim(const Victim& obj)
{
	*this = obj;
	if (PRINT)
		std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
}

Victim&	Victim::operator=(const Victim& obj)
{
	this->_name = obj._name;
	if (PRINT)
		std::cout << "Some random victim called " << this->_name << " just appeared!" << std::endl;
	return *this;
}

std::string	Victim::get_name(void) const{
	return this->_name ;
}

std::ostream &	operator<<(std::ostream& os, const Victim& src){
	os << "I am " << src.get_name() << " and I like otters!" << std::endl;
	return (os);
}

void Victim::getPolymorphed() const{
	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}