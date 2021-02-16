/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 10:37:31 by alienard          #+#    #+#             */
/*   Updated: 2021/02/15 11:35:00 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void	HumanA::attack(){
	std::cout << _name << " attacks with his " << _weapon.getType() << std::endl;
}

HumanA::HumanA(std::string name, Weapon &wp) : _name(name), _weapon(wp)
{
}

HumanA::~HumanA()
{
}
