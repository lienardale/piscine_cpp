/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:13:04 by alienard          #+#    #+#             */
/*   Updated: 2021/02/19 10:39:21 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap(100, 100, 100, 100, 1, "Unknown", 30, 20, 5, "FR4G-TP") {
	if (PRINT)
		std::cout << "FR4G-TP Constructor called. FR4G-TP "<< this->_name << " : Séquence d'initiation terminée. Bonjour, je suis votre nouveau robot multifonction. Nom : " << this->_name << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(100, 100, 100, 100, 1, name, 30, 20, 5, "FR4G-TP") {
	if (PRINT)
		std::cout << "FR4G-TP Constructor called. FR4G-TP "<< this->_name << " : Séquence d'initiation terminée. Bonjour, je suis votre nouveau robot multifonction. Nom : " << _name << std::endl;
}

FragTrap::~FragTrap()
{
	if (PRINT)
		std::cout << "FR4G-TP Destructor called. FR4G-TP "<< this->_name << " : OK. Merci de m'avoir donné une deuxième chance Dieu. C'est vraiment trop sympa. " ;// << std::endl;
}

FragTrap::FragTrap(const FragTrap& obj)
{
	if (PRINT)
		std::cout << "FR4G-TP Copy Constructor called. FR4G-TP "<< this->_name << " : Séquence d'initiation terminée. Bonjour, je suis votre nouveau robot multifonction. Nom : " << this->_name << std::endl;
	*this = obj;
}

FragTrap&	FragTrap::operator=(const FragTrap& obj)
{
	if (PRINT)
		std::cout << "FR4G-TP Assignation Operator called. FR4G-TP "<< this->_name << " : Séquence d'initiation terminée. Bonjour, je suis votre nouveau robot multifonction. Nom : " << this->_name << std::endl;
	ClapTrap::operator=(obj);
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
