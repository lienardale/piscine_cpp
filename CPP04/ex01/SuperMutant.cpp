/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:21:30 by alienard          #+#    #+#             */
/*   Updated: 2021/02/25 11:22:17 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"

SuperMutant::SuperMutant() : Enemy(170, "Super Mutant")
{
	if (PRINT)
		std::cout << "Gaaah. Me want smash heads!" << std::endl;

}

SuperMutant::~SuperMutant()
{
	if (PRINT)
		std::cout << "Aaargh..." << std::endl;

}

SuperMutant::SuperMutant(const SuperMutant& obj) : Enemy(obj._hp, obj._type)
{
	if (PRINT)
		std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant&	SuperMutant::operator=(const SuperMutant& obj)
{
	Enemy::operator=(obj);
	if (PRINT)
		std::cout << "Gaaah. Me want smash heads!" << std::endl;
	return *this;
}

void SuperMutant::takeDamage(int dmg){
	if (this->_hp == 0)
		return ;
	else if (dmg - 3 <= 0)
		return ;
	else if (dmg - 3 >= this->_hp)
		this->_hp = 0;
	else
		this->_hp -= dmg - 3;
}
