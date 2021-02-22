/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:13:33 by alienard          #+#    #+#             */
/*   Updated: 2021/02/22 10:17:57 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap(100, 100, 50, 50, 1, "Unknown", 20, 15, 3, "SC4V-TP"){
	if (PRINT)
		std::cout << "SC4V-TP Constructor called. "<< this->_name << " : Séquence d'initiation terminée." << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(100, 100, 50, 50, 1, name, 20, 15, 3, "SC4V-TP"){
	if (PRINT)
		std::cout << "SC4V-TP Constructor called. "<< this->_name << " : Séquence d'initiation terminée." << std::endl;
}

ScavTrap::~ScavTrap()
{
	if (PRINT)
		std::cout << "SC4V-TP Destructor called. "<< this->_name << " : OK. Merci de m'avoir donné une deuxième chance Dieu. C'est vraiment trop sympa. " << std::endl;

}

ScavTrap::ScavTrap(const ScavTrap& obj)
{
	*this = obj;
	if (PRINT)
		std::cout << "SC4V-TP Copy Constructor called. "<< this->_name << " : Séquence d'initiation terminée." << std::endl;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& obj)
{
	ClapTrap::operator=(obj);
	if (PRINT)
		std::cout << "SC4V-TP Frag Assignation Operator called. "<< this->_name << " : Séquence d'initiation terminée." << std::endl;
	return *this;
}

unsigned int		ScavTrap::challengeNewcomer(std::string const & target){
	unsigned int	challenge_nb = rand() % 5;
	std::string		challenge;
	
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
	return challenge_nb;
}

unsigned int			ScavTrap::rangedAttack(std::string const & target){
	if (this->_energy_points > 0){
		std::cout << this->_type << " "<< this->_name << " attacks " << target << " at range, causing " << this->_range_attack_damage << " points of damage ! (without armor reduction)" << std::endl;
		std::cout << this->_type << " "<< this->_name  << " : HEAD SHOT HEHEHEHE !" << std::endl;
		return (this->_range_attack_damage);
	}
	return 0;
}

unsigned int			ScavTrap::meleeAttack(std::string const & target){
	if (this->_energy_points >= 0){
		std::cout << this->_type << " "<< this->_name << " attacks " << target << " in melee, causing " << this->_melee_attack_damage << " points of damage ! (without armor reduction)" << std::endl;
		std::cout << this->_type << " "<< this->_name  << " : THIS IS HOW WE DO IT !" << std::endl;
		return (this->_melee_attack_damage);
	}
	return 0;
}
