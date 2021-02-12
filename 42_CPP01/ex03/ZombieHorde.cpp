/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 15:36:47 by alienard          #+#    #+#             */
/*   Updated: 2021/02/12 16:10:12 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

void	ZombieHorde::announce( void ){
	for ( int i = 0 ; i < _nbZombies ; i++){
		_Horde[i].announce();
	}
	return ;
}

ZombieHorde::ZombieHorde( int n ){
	std::string	random_names[10] = {"Pierre", "Paul", "Jacques", "Hugues", "Roger",
									"Hubert", "Georges", "Michel", "Gerard", "Mokhtar"};
// we allocate it so that nothing weird happens
	this->_Horde = new Zombie[n];
	this->_nbZombies = n;
	for ( int i = 0 ; i < n ; i++){
		this->_Horde[i].set_name(random_names[rand() % 10]);
		this->_Horde[i].set_type("Horde_member Zombie");
	}
}

ZombieHorde::~ZombieHorde( void ){
// we delete it so that the memory is freed when the horde is deleted in the main
	delete [] _Horde;
}
