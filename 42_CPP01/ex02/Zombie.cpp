/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 17:10:57 by alienard          #+#    #+#             */
/*   Updated: 2021/02/10 17:27:34 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void	Zombie::advert( void ){
	std::cout << this->_name << " " << this->_type << " " << "Braiiiiiiinnnssss ..." << std::endl;
	return ;
}

Zombie::Zombie( void ){

	return ;
}

Zombie::~Zombie( void ){
	
}