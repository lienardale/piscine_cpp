/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:23:24 by alienard          #+#    #+#             */
/*   Updated: 2021/02/25 11:23:51 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"

AssaultTerminator::AssaultTerminator()
{
	if (PRINT)
		std::cout << "* teleports from space *" << std::endl;

}

AssaultTerminator::~AssaultTerminator()
{
	if (PRINT)
		std::cout << "I’ll be back..." << std::endl;

}

AssaultTerminator::AssaultTerminator(const AssaultTerminator& obj)
{
	if (PRINT)
		std::cout << "* teleports from space *" << std::endl;
	*this = obj;
}

AssaultTerminator&	AssaultTerminator::operator=(const AssaultTerminator& obj)
{
	this->_next = obj._next;
	this->_squad = obj._squad;
	if (PRINT)
		std::cout << "* teleports from space *" << std::endl;
	return *this;
}

ISpaceMarine* AssaultTerminator::clone() const{
	ISpaceMarine* clone = new AssaultTerminator;
	return clone;
}

void AssaultTerminator::battleCry() const{
	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void AssaultTerminator::rangedAttack() const{
	std::cout << "* does nothing *" << std::endl;
}

void AssaultTerminator::meleeAttack() const{
	std::cout << "* attacks with chainfists *" << std::endl;
}

ISquad *AssaultTerminator::getSquad(){
	return this->_squad;
}

void AssaultTerminator::setSquad(ISquad* tmp){
	this->_squad = tmp;
}

ISpaceMarine *AssaultTerminator::getNext(){
	return this->_next;
}

void	AssaultTerminator::setNext(ISpaceMarine* next){
	this->_next = next;
}
