/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 17:11:31 by alienard          #+#    #+#             */
/*   Updated: 2021/02/11 15:45:12 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

std::string	ZombieEvent::getZombieType( void ){
	return this->_set_type;
}

void	ZombieEvent::setZombieType( std::string type ){
	_set_type = type;
}

Zombie	*ZombieEvent::newZombie ( std::string name ){
	Zombie	*tmp;

	tmp = new Zombie;
	tmp->set_name(name);
	tmp->set_type( _set_type );
	return (tmp);
}

void ZombieEvent::randomChump( void ){
	Zombie		tmp;
	std::string	random_names[10] = {"Pierre", "Paul", "Jacques", "Hugues", "Roger",
										"Hubert", "Georges", "Michel", "Gerard", "Mokhtar"};

	tmp.set_name( random_names[rand() % 10] );
	tmp.set_type( this->getZombieType() );
	tmp.announce();
}

ZombieEvent::ZombieEvent( void ){
	return ;
}

ZombieEvent::~ZombieEvent( void ){
}
