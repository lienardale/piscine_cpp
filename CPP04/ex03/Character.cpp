/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:25:01 by alienard          #+#    #+#             */
/*   Updated: 2021/02/25 11:26:55 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	// if (PRINT)
	// 	std::cout << "Default Constructor called" << std::endl;

}

Character::Character(std::string name) : _name(name) {
	// if (PRINT)
	// 	std::cout << "Constructor called" << std::endl;
	for(int i = 0 ; i < 4; i++){
		this->_stuff[i] = NULL;
	}
}

Character::~Character()
{
	// if (PRINT)
	// 	std::cout << "Destructor called" << std::endl;
	for(int i = 0 ; i < 4; i++){
		if (this->_stuff[i])
			delete this->_stuff[i];
	}
}

Character::Character(const Character& obj) : _name(obj._name)
{
	// Copy or assignation of a Character must be deep
	// if (PRINT)
	// 	std::cout << "Copy Constructor called" << std::endl;
	for(int i = 0 ; i < 4; i++){
		if (this->_stuff[i])
			unequip(i);
	}
	for(int i = 0 ; obj._stuff[i]; i++){
		if (obj._stuff[i])
			this->_stuff[i] = obj._stuff[i]->clone();
		else
			this->_stuff[i] = NULL;
	}
}

Character&	Character::operator=(const Character& obj)
{
	// Copy or assignation of a Character must be deep
	// if (PRINT)
	// 	std::cout << "Assignation operator called" << std::endl;
	this->_name = obj._name;
	for(int i = 0 ; i < 4; i++){
		if (this->_stuff[i])
			unequip(i);
	}
	for(int i = 0 ; obj._stuff[i]; i++){
		if (obj._stuff[i])
			this->_stuff[i] = obj._stuff[i]->clone();
		else
			this->_stuff[i] = NULL;
	}
	return *this;
}

std::string const & Character::getName() const{
	return this->_name;
}

void Character::equip(AMateria* m){
// 	The Character possesses an inventory of 4 Materia at most, empty at start. He’ll
// equip the Materia in slots 0 to 3, in this order.
// 	In case we try to equip a Materia in a full inventory, or use/uneqip a nonexistent
// Materia, don’t do a thing.
	if (!m)
		return ;
	for(int i = 0 ; i < 4; i++){
		if (!(this->_stuff[i])){
			this->_stuff[i] = m;
			return ;
		}
	}
}

void Character::unequip(int idx){
	// The unequip method must NOT delete Materia!
	if ( idx >=0 && idx < 4 )
		this->_stuff[idx] = NULL;
}

void Character::use(int idx, ICharacter& target){
// 	The use(int, ICharacter&) method will have to use the Materia at the idx slot,
// and pass target as parameter to the AMateria::use method.
	if (idx >= 0 && idx < 4 && this->_stuff[idx] != NULL)
		this->_stuff[idx]->use(target);
}
