/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:21:29 by alienard          #+#    #+#             */
/*   Updated: 2021/02/25 11:19:12 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"

PlasmaRifle::PlasmaRifle() : AWeapon("Plasma Rifle", 5, 21)
{

}

PlasmaRifle::~PlasmaRifle()
{

}

PlasmaRifle::PlasmaRifle(const PlasmaRifle& obj) : AWeapon(obj._name, obj._apcost, obj._damage)
{
	// if (PRINT)
	// 	std::cout << "Copy Constructor called" << std::endl;
}

PlasmaRifle&	PlasmaRifle::operator=(const PlasmaRifle& obj)
{
	AWeapon::operator=(obj);
	// if (PRINT)
	// 	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

void PlasmaRifle::attack() const{
	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
