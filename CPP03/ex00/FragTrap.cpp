/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:13:04 by alienard          #+#    #+#             */
/*   Updated: 2021/02/16 16:26:10 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name):_name(name)
{
	if (PRINT)
		std::cout << "CL4P-TP Constructor called" << std::endl << "CL4P-TP : Euh, qui ça ? Moi Monsieur ?" << std::endl;
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
		std::cout << "CL4P-TP Destructor called" << std::endl << "CL4P-TP : Passez un bon après-midi. Et merci d'utiliser les services robotiques d'Hyperion. N'hésitez pas à faire appel à moi en cas de portes." << std::endl;

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
