/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 17:10:57 by alienard          #+#    #+#             */
/*   Updated: 2021/02/12 16:08:23 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::set_name( std::string name ){
	this->_name = name;
}

std::string	Zombie::get_name( void ){
	return this->_name;
}

void	Zombie::set_type( std::string type ){
	this->_type = type;
}

std::string	Zombie::get_type( void ){
	return this->_type;
}

void	Zombie::announce( void ){
	std::cout << "Zombie called " << this->_name << " of type " << this->_type  << " is announcing itself : Braiiiiiiinnnssss ..." << std::endl;
	return ;
}

Zombie::Zombie( void ){
}

Zombie::~Zombie( void ){
}