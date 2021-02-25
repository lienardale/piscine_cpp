/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MegaBwork.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 19:15:46 by alienard          #+#    #+#             */
/*   Updated: 2021/02/25 11:22:08 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MegaBwork.hpp"

MegaBwork::MegaBwork() : Enemy(170, "Mega Bwork")
{
	if (PRINT)
		std::cout << "BWOOOOOOOOORK!" << std::endl;

}

MegaBwork::~MegaBwork()
{
	if (PRINT)
		std::cout << "GRUAAAARRRrhh..." << std::endl;

}

MegaBwork::MegaBwork(const MegaBwork& obj) : Enemy(obj._hp, obj._type)
{
	if (PRINT)
		std::cout << "BWOOOOOOOOORK!" << std::endl;
}

MegaBwork&	MegaBwork::operator=(const MegaBwork& obj)
{
	Enemy::operator=(obj);
	if (PRINT)
		std::cout << "BWOOOOOOOOORK!" << std::endl;
	return *this;
}

void MegaBwork::takeDamage(int dmg){
	if (this->_hp == 0)
		return ;
	else if (dmg - 3 <= 0)
		return ;
	else if (dmg - 3 >= this->_hp)
		this->_hp = 0;
	else
		this->_hp -= dmg - 3;
}
