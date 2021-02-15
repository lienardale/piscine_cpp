/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 10:37:36 by alienard          #+#    #+#             */
/*   Updated: 2021/02/15 11:34:13 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void	HumanB::attack(){
	std::cout << _name << " attacks with his " << _weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon &wp){
	_weapon = &wp;
}

HumanB::HumanB(std::string name) : _name(name)
{
}

HumanB::~HumanB()
{
}
