/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:21:30 by alienard          #+#    #+#             */
/*   Updated: 2021/02/25 11:20:58 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"

Enemy::Enemy()
{
	// if (PRINT)
	// 	std::cout << "Constructor called" << std::endl;

}

Enemy::Enemy(int hp, std::string const & type) : _hp(hp), _type(type){
	
}

Enemy::~Enemy()
{

}

Enemy::Enemy(const Enemy& obj)
{
	// if (PRINT)
	// 	std::cout << "Copy Constructor called" << std::endl;
	*this = obj;
}

Enemy&	Enemy::operator=(const Enemy& obj)
{
	this->_hp = obj._hp;
	this->_type = obj._type;
	// if (PRINT)
	// 	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

std::string const & Enemy::getType(void) const{
	return this->_type;
}

int Enemy::getHP(void) const{
	return this->_hp;
}

void Enemy::takeDamage(int dmg){
	if (this->_hp == 0)
		return ;
	else if (dmg <= 0)
		return ;
	else if (dmg >= this->_hp)
		this->_hp = 0;
	else
		this->_hp -= dmg;
}
