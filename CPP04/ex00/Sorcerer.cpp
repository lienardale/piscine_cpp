/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:19:45 by alienard          #+#    #+#             */
/*   Updated: 2021/02/25 10:13:26 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"

Sorcerer::Sorcerer()
{
	if (PRINT)
		std::cout << "Default Constructor called" << std::endl;

}

Sorcerer::Sorcerer(std::string name, std::string title) : _name(name), _title(title){
	if (PRINT)
		std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}

Sorcerer::~Sorcerer()
{
	if (PRINT)
		std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;

}

Sorcerer::Sorcerer(const Sorcerer& obj)
{
	*this = obj;
	if (PRINT)
		std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
}

Sorcerer&	Sorcerer::operator=(const Sorcerer& obj)
{
	this->_name = obj._name;
	this->_title = obj._title;
	if (PRINT)
		std::cout << this->_name << ", " << this->_title << ", is born !" << std::endl;
	return *this;
}

std::string	Sorcerer::get_name(void) const{
	return this->_name;
}

std::string	Sorcerer::get_title(void) const{
	return this->_title;
}

std::ostream &	operator<<(std::ostream& os, const Sorcerer& src){
	os << "I am " << src.get_name() << ", " << src.get_title() << ", and i like ponies!" << std::endl;
	return (os);
}

void	Sorcerer::polymorph(Victim const & victim)
{
	victim.getPolymorphed();
}
