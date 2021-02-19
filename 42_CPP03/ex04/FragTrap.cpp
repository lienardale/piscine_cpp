/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:13:04 by alienard          #+#    #+#             */
/*   Updated: 2021/02/19 20:15:59 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap(100, 100, 100, 100, 1, "Unknown", 30, 20, 5, "FR4G-TP") {
	if (PRINT)
		std::cout << "FR4G-TP Default Constructor called. " << this->_name << " : Séquence d'initiation terminée. Bonjour, je suis votre nouveau robot multifonction." << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(100, 100, 100, 100, 1, name, 30, 20, 5, "FR4G-TP") {
	if (PRINT)
		std::cout << "FR4G-TP Constructor called. " << this->_name << " : Séquence d'initiation terminée. Bonjour, je suis votre nouveau robot multifonction." << std::endl;
}

FragTrap::~FragTrap()
{
	if (PRINT)
		std::cout << "FR4G-TP Destructor called. " << this->_name << " : OK. Merci de m'avoir donné une deuxième chance Dieu. C'est vraiment trop sympa. " << std::endl;
}

FragTrap::FragTrap(const FragTrap& obj)
{
	*this = obj;
	if (PRINT)
		std::cout << "FR4G-TP Copy Constructor called. " << this->_name << " : Séquence d'initiation terminée. Bonjour, je suis votre nouveau robot multifonction." << std::endl;
}

FragTrap&	FragTrap::operator=(const FragTrap& obj)
{
	ClapTrap::operator=(obj);
	if (PRINT)
		std::cout << "FR4G-TP Assignation Operator called. " << this->_name << " : Séquence d'initiation terminée. Bonjour, je suis votre nouveau robot multifonction." << std::endl;
	return *this;
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

unsigned int			FragTrap::rangedAttack(std::string const & target){
	if (this->_energy_points > 0){
		std::cout << this->_type << " "<< this->_name << " attacks " << target << " at range, causing " << this->_range_attack_damage << " points of damage ! (without armor reduction)" << std::endl;
		std::cout << this->_type << " "<< this->_name  << " : DIDN'T SEE THAT COMING EH ?!" << std::endl;
		return (this->_range_attack_damage);
	}
	return 0;
}

unsigned int			FragTrap::meleeAttack(std::string const & target){
	if (this->_energy_points >= 0){
		std::cout << this->_type << " "<< this->_name << " attacks " << target << " in melee, causing " << this->_melee_attack_damage << " points of damage ! (without armor reduction)" << std::endl;
		std::cout << this->_type << " "<< this->_name  << " : CAPTURE THE FL4444444444G !" << std::endl;
		return (this->_melee_attack_damage);
	}
	return 0;
}
