/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:23:23 by alienard          #+#    #+#             */
/*   Updated: 2021/02/25 11:24:04 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"

TacticalMarine::TacticalMarine()
{
	if (PRINT)
		std::cout << "Tactical Marine ready for battle!" << std::endl;

}

TacticalMarine::~TacticalMarine()
{
	if (PRINT)
		std::cout << "Aaargh..." << std::endl;

}

TacticalMarine::TacticalMarine(const TacticalMarine& obj)
{
	if (PRINT)
		std::cout << "Tactical Marine ready for battle!" << std::endl;
	*this = obj;
}

TacticalMarine&	TacticalMarine::operator=(const TacticalMarine& obj)
{
	this->_next = obj._next;
	this->_squad = obj._squad;
	if (PRINT)
		std::cout << "Tactical Marine ready for battle!" << std::endl;
	return *this;
}

ISpaceMarine* TacticalMarine::clone() const{
	ISpaceMarine* clone = new TacticalMarine;
	return clone;
}

void TacticalMarine::battleCry() const{
	std::cout << "For the holy PLOT!" << std::endl;
}

void TacticalMarine::rangedAttack() const{
	std::cout << "* attacks with a bolter *" << std::endl;
}

void TacticalMarine::meleeAttack() const{
	std::cout << "* attacks with a chainsword *" << std::endl;
}

ISquad *TacticalMarine::getSquad(){
	return this->_squad;
}

void TacticalMarine::setSquad(ISquad* tmp){
	this->_squad = tmp;
}

ISpaceMarine *TacticalMarine::getNext(){
	return this->_next;
}

void	TacticalMarine::setNext(ISpaceMarine* next){
	this->_next = next;
}
