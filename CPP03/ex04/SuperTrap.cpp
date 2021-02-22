/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:14:28 by alienard          #+#    #+#             */
/*   Updated: 2021/02/22 14:10:32 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(): ClapTrap(), FragTrap(), NinjaTrap() {
	if (PRINT)
		std::cout << "5UP3R-TP Default Constructor called. " << this->_name << " : Séquence d'initiation terminée." << std::endl;
	this->_type = "5UP3R-TP";
}

SuperTrap::SuperTrap(std::string name): ClapTrap(name), FragTrap(name), NinjaTrap(name){
	if (PRINT)
		std::cout << "5UP3R-TP Constructor called. " << this->_name << " : Séquence d'initiation terminée." << std::endl;
	this->_type = "5UP3R-TP";
	// this->_hit_points = FragTrap::_hit_points;
	// this->_max_hit_points =  FragTrap::_max_hit_points;
	// this->_energy_points = NinjaTrap::_energy_points;
	// this->_max_energy_points = NinjaTrap::_max_energy_points;
	// this->_melee_attack_damage = NinjaTrap::_melee_attack_damage;
	// this->_range_attack_damage = FragTrap::_range_attack_damage;
	// this->_armor_damage_reduction = FragTrap::_armor_damage_reduction;
}

SuperTrap::~SuperTrap()
{
	if (PRINT)
		std::cout << "5UP3R-TP  Destructor called. " << this->_name << " : OK. Merci de m'avoir donné une deuxième chance Dieu. C'est vraiment trop sympa. " << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap& obj) : ClapTrap(obj._hit_points, obj._max_hit_points, obj._energy_points, obj._max_energy_points, obj._level, obj._name, obj._melee_attack_damage, obj._range_attack_damage, obj._armor_damage_reduction, obj._type)
{
	// *this = obj;
	if (PRINT)
		std::cout << "5UP3R-TP Copy Constructor called. " << this->_name << " : Séquence d'initiation terminée." << std::endl;
}

SuperTrap&	SuperTrap::operator=(const SuperTrap& obj)
{
	ClapTrap::operator=(obj);
	if (PRINT)
		std::cout << "5UP3R-TP Assignation Operator called. " << this->_name << " : Séquence d'initiation terminée." << std::endl;
	return *this;
}

unsigned int			SuperTrap::rangedAttack(std::string const & target){
	return FragTrap::rangedAttack(target);
}

unsigned int			SuperTrap::meleeAttack(std::string const & target){
	return NinjaTrap::meleeAttack(target);
}
