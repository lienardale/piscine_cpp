/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 10:40:28 by alienard          #+#    #+#             */
/*   Updated: 2021/02/10 17:11:25 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

Pony::Pony( std::string p1, std::string	p2, int p3, std::string p4 ) : _name(p1), _color(p2), _age(p3), _allocation(p4){
	std::cout << "A New Pony is created" << std::endl;
	std::cout << "His name is " << this->_name << std::endl;
	std::cout << "His color is " << this->_color << std::endl;
	std::cout << "He is " << this->_age << " years old" << std::endl;
	std::cout << "And is allocated on the " << this->_allocation << std::endl;
	return ;
}

Pony::~Pony( void ){
	std::cout << this->_name << " was destructed" << std::endl;
}
