/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:21:28 by alienard          #+#    #+#             */
/*   Updated: 2021/02/25 11:20:04 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"

AWeapon::AWeapon()
{
	if (PRINT)
		std::cout << "Constructor called" << std::endl;

}

AWeapon::AWeapon(std::string const & name, int apcost, int damage) : _name(name), _damage(damage),_apcost(apcost) {
	
}

AWeapon::~AWeapon()
{

}

AWeapon::AWeapon(const AWeapon& obj)
{
	// if (PRINT)
	// 	std::cout << "Copy Constructor called" << std::endl;
	*this = obj;
}

AWeapon&	AWeapon::operator=(const AWeapon& obj)
{
	this->_name = obj._name;
	this->_damage = obj._damage;
	this->_apcost = obj._apcost;
	// if (PRINT)
	// 	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

std::string const & AWeapon::getName() const{
	return this->_name;
}

int AWeapon::getAPCost() const{
	return this->_apcost;
}

int AWeapon::getDamage() const{
	return this->_damage;
}
