/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:13:33 by alienard          #+#    #+#             */
/*   Updated: 2021/02/19 19:44:26 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : _hit_points(100), _max_hit_points(100), _energy_points(50), _max_energy_points(50),
							_level(1), _name("Unknow"), _melee_attack_damage(20), _range_attack_damage(15),
							_armor_damage_reduction(5){
	if (PRINT)
		std::cout << "SC4V-TP Constructor called. "<< this->_name << " : Séquence d'initiation terminée. Bonjour, je suis votre nouveau robot multifonction." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : _hit_points(100), _max_hit_points(100), _energy_points(50), _max_energy_points(50),
							_level(1), _name(name), _melee_attack_damage(20), _range_attack_damage(15),
							_armor_damage_reduction(5){
	if (PRINT)
		std::cout << "SC4V-TP Constructor called. "<< this->_name << " : Séquence d'initiation terminée. Bonjour, je suis votre nouveau robot multifonction." << std::endl;
}

ScavTrap::~ScavTrap()
{
	if (PRINT)
		std::cout << "SC4V-TP Destructor called. "<< this->_name << " : OK. Merci de m'avoir donné une deuxième chance Dieu. C'est vraiment trop sympa." << std::endl;

}

ScavTrap::ScavTrap(const ScavTrap& obj)
{
	if (PRINT)
		std::cout << "SC4V-TP Copy Constructor called. "<< this->_name << " : Séquence d'initiation terminée. Bonjour, je suis votre nouveau robot multifonction." << std::endl;
	*this = obj;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& obj)
{
	if (PRINT)
		std::cout << "SC4V-TP Frag Assignation Operator called. "<< this->_name << " : Séquence d'initiation terminée. Bonjour, je suis votre nouveau robot multifonction." << std::endl;
	this->_hit_points = obj._hit_points;
	this->_max_hit_points = obj._max_hit_points;
	this->_energy_points = obj._energy_points;
	this->_max_energy_points = obj._max_energy_points;
	this->_level = obj._level;
	this->_name = obj._name;
	this->_melee_attack_damage = obj._melee_attack_damage;
	this->_range_attack_damage = obj._range_attack_damage;
	this->_armor_damage_reduction = obj._armor_damage_reduction;
	return *this;
}

unsigned int			ScavTrap::rangedAttack(std::string const & target){
	if (this->_energy_points > 0){
		std::cout << "SC4V-TP "<< this->_name << " attacks " << target << " at range, causing " << this->_range_attack_damage << " points of damage ! (without armor reduction)" << std::endl;
		return (this->_range_attack_damage);
	}
	return 0;
}

unsigned int			ScavTrap::meleeAttack(std::string const & target){
	if (this->_energy_points >= 0){
		std::cout << "SC4V-TP "<< this->_name << " attacks " << target << " in melee, causing " << this->_melee_attack_damage << " points of damage ! (without armor reduction)" << std::endl;
		return (this->_melee_attack_damage);
	}
	return 0;
}

void	ScavTrap::takeDamage(unsigned int amount){
	unsigned int armor;

	armor = (unsigned int)this->_armor_damage_reduction;
	if (amount == 0 || armor >= amount)
		std::cout << "SC4V-TP "<< this->_name << " takes 0 damage points." << std::endl;
	else
		std::cout << "SC4V-TP "<< this->_name << " takes " << amount - this->_armor_damage_reduction << " damage points." << std::endl;
	if (amount > 0 && armor < amount)
		this->_hit_points -= amount - this->_armor_damage_reduction;
	if ( this->_hit_points <= 0 ){
		this->_hit_points = 0;
		std::cout << "SC4V-TP "<< this->_name << " is dead." << std::endl;
	}
	else
		std::cout << "SC4V-TP "<< this->_name << " : " << this->_hit_points << " HP left." << std::endl;
}

void	ScavTrap::beRepaired(unsigned int amount){
	std::cout << "SC4V-TP "<< this->_name << " is being repaired.";
	this->_hit_points += amount;
	if (this->_hit_points > this->_max_hit_points)
		this->_hit_points = this->_max_hit_points;
	std::cout << " " << this->_hit_points << " HP left." << std::endl;
}

unsigned int		ScavTrap::challengeNewcomer(std::string const & target){
	int			challenge_nb = rand() % 5;
	std::string	challenge;
	
	if (this->_hit_points <= 0)
		return 0;
	switch (challenge_nb)
	{
	case 0:
		challenge = " Let's do a fart contest.";
		break;
	case 1:
		challenge = " Let's do a burp contest.";
		break;
	case 2:
		challenge = " Tell me you're depressed without telling me you're depressed.";
		break;
	case 3:
		challenge = " Is this a good situation, scribe?";
		break;
	default:
		challenge = " Do you know the french joke of the chair?";
		break;
	}
	std::cout << "SC4V-TP " << this->_name << " challenges newcomer : Hello " << target << challenge << std::endl;
	return 0;
}

int		ScavTrap::get_hit_points(void){
	return this->_hit_points;
}

void		ScavTrap::set_hit_points(int hp){
	this->_hit_points = hp;
	return ;
}

std::string		ScavTrap::get_name(void){
	return this->_name;
}
