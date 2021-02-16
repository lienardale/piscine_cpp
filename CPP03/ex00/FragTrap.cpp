/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:13:04 by alienard          #+#    #+#             */
/*   Updated: 2021/02/16 12:26:36 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name):_name(name)
{
	if (PRINT)
		std::cout << "Constructor called" << std::endl;
	this->_hit_points = 100;
	this->_max_hit_points = 100;
	this->_energy_points = 100;
	this->_max_energy_points = 100;
	this->_level = 1;
	this->_melee_attak_damage = 30;
	this->_range_attack_damage = 20;
	this->_armor_damage_reduction = 5;
}

FragTrap::~FragTrap()
{
	if (PRINT)
		std::cout << "Destructor called" << std::endl;

}

FragTrap::FragTrap(const FragTrap& obj)
{
	if (PRINT)
		std::cout << "Copy Constructor called" << std::endl;
	*this = obj;
}

FragTrap&	FragTrap::operator=(const FragTrap& obj)
{
	if (PRINT)
		std::cout << "Assignation operator called" << std::endl;
	return *this;
}

void	FragTrap::rangedAttack(std::string const & target){
	std::cout << "FR4G-TP "<< this->_name << " attacks " << target << " at range, causing " << this->_range_attack_damage << " points of damage!" << std::endl;
}

void	FragTrap::meleeAttack(std::string const & target){

}

void	FragTrap::takeDamage(unsigned int amount){

}

void	FragTrap::beRepaired(unsigned int amount){

}
