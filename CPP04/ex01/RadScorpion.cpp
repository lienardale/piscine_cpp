/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:21:31 by alienard          #+#    #+#             */
/*   Updated: 2021/02/25 11:22:26 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"

RadScorpion::RadScorpion() : Enemy(80, "RadScorpion")
{
	if (PRINT)
		std::cout << "* click click click *" << std::endl;

}

RadScorpion::~RadScorpion()
{
	if (PRINT)
		std::cout << "* SPROTCH *" << std::endl;

}

RadScorpion::RadScorpion(const RadScorpion& obj) : Enemy(obj._hp, obj._type)
{
	if (PRINT)
		std::cout << "* click click click *" << std::endl;
}

RadScorpion&	RadScorpion::operator=(const RadScorpion& obj)
{
	Enemy::operator=(obj);
	if (PRINT)
		std::cout << "* click click click *" << std::endl;
	return *this;
}

void RadScorpion::takeDamage(int dmg){
	if (this->_hp == 0)
		return ;
	else if (dmg - 3 <= 0)
		return ;
	else if (dmg - 3 >= this->_hp)
		this->_hp = 0;
	else
		this->_hp -= dmg - 3;
}
