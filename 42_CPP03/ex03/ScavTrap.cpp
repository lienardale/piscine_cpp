/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:13:33 by alienard          #+#    #+#             */
/*   Updated: 2021/02/19 13:12:47 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap(100, 100, 50, 50, 1, "Unknown", 20, 15, 5, "SC4V-TP"){
	if (PRINT)
		std::cout << "SC4V-TP Constructor called. SC4V-TP "<< this->_name << " : Séquence d'initiation terminée. Bonjour, je suis votre nouveau robot multifonction. Nom : "<< this->_name << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(100, 100, 50, 50, 1, name, 20, 15, 5, "SC4V-TP"){
	if (PRINT)
		std::cout << "SC4V-TP Constructor called. SC4V-TP "<< this->_name << " : Séquence d'initiation terminée. Bonjour, je suis votre nouveau robot multifonction. Nom : "<< this->_name << std::endl;
}

ScavTrap::~ScavTrap()
{
	if (PRINT)
		std::cout << "SC4V-TP Destructor called. SC4V-TP "<< this->_name << " : OK. Merci de m'avoir donné une deuxième chance Dieu. C'est vraiment trop sympa. " ;//<< std::endl;

}

ScavTrap::ScavTrap(const ScavTrap& obj)
{
	if (PRINT)
		std::cout << "SC4V-TP Copy Constructor called. SC4V-TP "<< this->_name << " : Séquence d'initiation terminée. Bonjour, je suis votre nouveau robot multifonction. Nom : " << this->_name << std::endl;
	*this = obj;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& obj)
{
	if (PRINT)
		std::cout << "SC4V-TP Frag Assignation Operator called. SC4V-TP "<< this->_name << " : Séquence d'initiation terminée. Bonjour, je suis votre nouveau robot multifonction. Nom : " << this->_name << std::endl;
	ClapTrap::operator=(obj);
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
