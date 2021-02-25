/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:21:31 by alienard          #+#    #+#             */
/*   Updated: 2021/02/25 11:30:12 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	if (PRINT)
		std::cout << "Constructor called" << std::endl;

}

Character::Character(std::string const & name) : _name(name), _ap(40), _curr_w(NULL){

}

Character::~Character()
{

}

Character::Character(const Character& obj)
{
	// if (PRINT)
	// 	std::cout << "Copy Constructor called" << std::endl;
	*this = obj;
}

Character&	Character::operator=(const Character& obj)
{
	this->_name = obj._name;
	this->_ap = obj._ap;
	this->_curr_w = obj._curr_w;
	// if (PRINT)
	// 	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

void Character::recoverAP(){
	this->_ap += 10;
	if (this->_ap > 40)
		this->_ap = 40;
}

void Character::equip(AWeapon* new_wp){
	this->_curr_w = new_wp;
}

void Character::attack(Enemy* Foe){
	if (!this->_curr_w){
		std::cout << this->_name << " has " << this->_ap << " AP and is unarmed" << std::endl;
		return ;
	}
	if (!Foe || this->_ap <= this->_curr_w->getAPCost())
		return ;
	else{
		std::cout << this->_name << " attacks " << Foe->getType() << " with a " << this->_curr_w->getName() << std::endl;
		this->_curr_w->attack();
		Foe->takeDamage(this->_curr_w->getDamage());
		this->_ap -= this->_curr_w->getAPCost();
		if (Foe->getHP() <= 0){
			delete Foe;
			Foe = NULL;
		}
	}
	
}

std::string const & Character::getName() const{
	return this->_name;
}

int	const & Character::getAP() const{
	return this->_ap;
}

AWeapon* Character::getWeapon() const{
	return this->_curr_w;
}

std::ostream &	operator<<(std::ostream& os, const Character& src){
	if (src.getWeapon())
		os << src.getName() << " has " << src.getAP() << " AP and wields a " << src.getWeapon()->getName() << std::endl;
	else
		os << src.getName() << " has " << src.getAP() << " AP and is unarmed" << std::endl;
	return (os);
}
