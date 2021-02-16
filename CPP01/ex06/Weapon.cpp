/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 09:45:09 by alienard          #+#    #+#             */
/*   Updated: 2021/02/15 11:23:21 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string& Weapon::getType(void) {
	const std::string&	_type_ref = _type;
	return (_type_ref);
}

void				Weapon::setType(std::string type){
	this->_type = type;
	return ;
}

Weapon::Weapon(std::string wp) : _type(wp)
{
}

Weapon::~Weapon()
{
}