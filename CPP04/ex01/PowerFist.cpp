/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:21:29 by alienard          #+#    #+#             */
/*   Updated: 2021/02/25 11:20:27 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"

PowerFist::PowerFist() : AWeapon("Power Fist", 8, 50)
{

}

PowerFist::~PowerFist()
{

}

PowerFist::PowerFist(const PowerFist& obj) : AWeapon(obj._name, obj._apcost, obj._damage)
{
	// if (PRINT)
	// 	std::cout << "Copy Constructor called" << std::endl;
}

PowerFist&	PowerFist::operator=(const PowerFist& obj)
{
	AWeapon::operator=(obj);
	// if (PRINT)
	// 	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

void PowerFist::attack() const{
	std::cout << "* pschhh... SBAM! *" << std::endl;
}
