/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:13:04 by alienard          #+#    #+#             */
/*   Updated: 2021/02/19 19:29:46 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : _hit_points(100), _max_hit_points(100), _energy_points(100), _max_energy_points(100),
							_level(1), _name("Unknow"), _melee_attack_damage(30), _range_attack_damage(20),
							_armor_damage_reduction(5) {
	if (PRINT)
		std::cout << "FR4G-TP Constructor called" << this->_name << " : Séquence d'initiation terminée. Bonjour, je suis votre nouveau robot multifonction." << std::endl;
}

FragTrap::FragTrap(std::string name): _hit_points(100), _max_hit_points(100), _energy_points(100), _max_energy_points(100),
							_level(1), _name(name), _melee_attack_damage(30), _range_attack_damage(20),
							_armor_damage_reduction(5) {
	if (PRINT)
		std::cout << "FR4G-TP Frag Constructor called" << this->_name << " : Séquence d'initiation terminée. Bonjour, je suis votre nouveau robot multifonction." << std::endl;
}

FragTrap::~FragTrap()
{
	if (PRINT)
		std::cout << "FR4G-TP Frag Destructor called" << this->_name << " : OK. Merci de m'avoir donné une deuxième chance Dieu. C'est vraiment trop sympa." << std::endl;
}

FragTrap::FragTrap(const FragTrap& obj)
{
	if (PRINT)
		std::cout << "FR4G-TP Frag Copy Constructor called" << this->_name << " : Séquence d'initiation terminée. Bonjour, je suis votre nouveau robot multifonction." << std::endl;
	*this = obj;
}

FragTrap&	FragTrap::operator=(const FragTrap& obj)
{
	if (PRINT)
		std::cout << "FR4G-TP Frag Assignation Operator called" << this->_name << " : Séquence d'initiation terminée. Bonjour, je suis votre nouveau robot multifonction." << std::endl;
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

unsigned int			FragTrap::rangedAttack(std::string const & target){
	if (this->_energy_points > 0){
		std::cout << "FR4G-TP "<< this->_name << " attacks " << target << " at range, causing " << this->_range_attack_damage << " points of damage ! (without armor reduction)" << std::endl;
		return (this->_range_attack_damage);
	}
	return 0;
}

unsigned int			FragTrap::meleeAttack(std::string const & target){
	if (this->_energy_points >= 0){
		std::cout << "FR4G-TP "<< this->_name << " attacks " << target << " in melee, causing " << this->_melee_attack_damage << " points of damage ! (without armor reduction)" << std::endl;
		return (this->_melee_attack_damage);
	}
	return 0;
}

void	FragTrap::takeDamage(unsigned int amount){
	unsigned int armor;

	armor = (unsigned int)this->_armor_damage_reduction;
	if (amount == 0 || armor >= amount)
		std::cout << "FR4G-TP "<< this->_name << " takes 0 damage points." << std::endl;
	else
		std::cout << "FR4G-TP "<< this->_name << " takes " << amount - this->_armor_damage_reduction << " damage points." << std::endl;
	if (amount > 0 && armor < amount)
		this->_hit_points -= amount - this->_armor_damage_reduction;
	if ( this->_hit_points <= 0 ){
		this->_hit_points = 0;
		std::cout << "FR4G-TP "<< this->_name << " is dead." << std::endl;
	}
	else
		std::cout << "FR4G-TP "<< this->_name << " : " << this->_hit_points << " HP left." << std::endl;
}

void	FragTrap::beRepaired(unsigned int amount){
	std::cout << "FR4G-TP "<< this->_name << " is being repaired.";
	this->_hit_points += amount;
	if (this->_hit_points > this->_max_hit_points)
		this->_hit_points = this->_max_hit_points;
	std::cout << " " << this->_hit_points << " HP left." << std::endl;
}

unsigned int		FragTrap::vaulthunter_dot_exe(std::string const & target){
	int			attack_nb = rand() % 5;
	unsigned int			dmg;
	std::string	attack;
	
	if (this->_hit_points <= 0)
		return 0;
	this->_energy_points -= 25;
	if (this->_energy_points < 0)
		std::cout << "FR4G-TP "<< this->_name << " is out of energy." << std::endl;
	else {
		switch (attack_nb)
		{
		case 0:
			dmg = 0;
			attack = "robot small fart";
			break;
		case 1:
			dmg = 5;
			attack = "robot weak punch";
			break;
		case 2:
			dmg = 10;
			attack = "robot normal kick";
			break;
		case 3:
			dmg = 50;
			attack = "robot toxic fart with acid spray";
			break;
		default:
			dmg = 2147483647;
			attack = "very very big attack with flammes, tornadoes, sharks, toxic farts and machine guns";
			break;
		}
		std::cout << "FR4G-TP " << this->_name << " attacks : " << attack << ", it causes " << dmg << " dmg points to " << target << " (without armor reduction)." << std::endl;
		return dmg;
	}
	return 0;
}

int		FragTrap::get_hit_points(void){
	return this->_hit_points;
}

void		FragTrap::set_hit_points(int hp){
	this->_hit_points = hp;
	return ;
}

std::string		FragTrap::get_name(void){
	return this->_name;
}
