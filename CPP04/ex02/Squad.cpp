/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:23:23 by alienard          #+#    #+#             */
/*   Updated: 2021/02/24 20:26:03 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"

Squad::Squad()
{
	if (PRINT)
		std::cout << "Squad Constructor called" << std::endl;
	this->_end_list = NULL;
	this->_beg_list = NULL;
	this->_count = 0;
}

Squad::~Squad()
{
	if (PRINT)
		std::cout << "Squad Destructor called" << std::endl;
	ISpaceMarine	*tmp = this->_beg_list;
	ISpaceMarine	*next = this->_beg_list;
	while (tmp){
		next = next->getNext();
		if (tmp)
			delete tmp;
		tmp = next;
	}
}

Squad::Squad(const Squad& obj)
{
	if (PRINT)
		std::cout << "Squad Copy operator called" << std::endl;
	this->_end_list = NULL;
	this->_beg_list = NULL;
	this->_count = 0;
	for (int i = 0; i < obj._count; ++i){
		this->push(obj.getUnit(i)->clone());
	}
}

Squad&	Squad::operator=(const Squad& obj) 
{
	if (PRINT)
		std::cout << "Squad Assignation operator called" << std::endl;
	if (this->_end_list){
		ISpaceMarine	*tmp = this->_beg_list;
		ISpaceMarine	*next = this->_beg_list;
		while (tmp){
			next = next->getNext();
			if (tmp)
				delete tmp;
			tmp = next;
		}
	}
	this->_end_list = NULL;
	this->_beg_list = NULL;
	this->_count = 0;
	for (int i = 0; i < obj._count; ++i){
		this->push(obj.getUnit(i)->clone());
	}
	return *this;
}

int Squad::getCount() const{
	return this->_count;
}

ISpaceMarine* Squad::getUnit(int nb) const{
	ISpaceMarine	*tmp = this->_beg_list;
	int i = -1;
	if (nb < 0 || nb > this->_count)
		return NULL;
	while ( tmp && ++i < nb ){
		tmp = tmp->getNext();
	}
	std::cout << "Unit nb " << nb << " has been called" << std::endl;
	return tmp ;
}

int Squad::push(ISpaceMarine* newbie){
	if (!(this->_end_list)){
		this->_end_list = newbie;
		this->_beg_list = newbie;
		newbie->setSquad(this);
		newbie->setNext(NULL);
		this->_count = 1;
		std::cout << "A new squad member has been pushed at pos " << this->_count << std::endl;
	}
	else{
		for (int i = 0; i < this->_count; ++i){
			ISpaceMarine* cur = this->getUnit(i);
			if (cur == newbie){
				std::cout << "This Marine is already in the squad at pos " << i + 1  << std::endl;
				return (this->_count);
			}
		}
		this->_end_list->setNext(newbie);
		this->_end_list = newbie;
		newbie->setNext(NULL);
		newbie->setSquad(this);
		this->_count += 1;
		std::cout << "A new squad member has been pushed at pos " << this->_count << std::endl;
	}
	return (this->_count);
}
