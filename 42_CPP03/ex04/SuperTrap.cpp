/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:14:28 by alienard          #+#    #+#             */
/*   Updated: 2021/02/19 17:08:24 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap(): FragTrap(), NinjaTrap() {
	if (PRINT)
		std::cout << "5UP3R-TP Default Constructor called. " << this->_name << " : Séquence d'initiation terminée. Bonjour, je suis votre nouveau robot multifonction. Nom : " << this->_name << std::endl;
	this->_type = "5UP3R-TP";
}

SuperTrap::SuperTrap(std::string name): ClapTrap(name), FragTrap(name), NinjaTrap(name){
	if (PRINT)
		std::cout << "5UP3R-TP Constructor called. " << this->_name << " : Séquence d'initiation terminée. Bonjour, je suis votre nouveau robot multifonction. Nom : " << this->_name << std::endl;
	this->_type = "5UP3R-TP";
}

SuperTrap::~SuperTrap()
{
	if (PRINT)
		std::cout << "5UP3R-TP  Destructor called. " << this->_name << " : OK. Merci de m'avoir donné une deuxième chance Dieu. C'est vraiment trop sympa. " << std::endl;
}

SuperTrap::SuperTrap(const SuperTrap& obj)
{
	if (PRINT)
		std::cout << "5UP3R-TP Copy Constructor called. " << this->_name << " : Séquence d'initiation terminée. Bonjour, je suis votre nouveau robot multifonction. Nom : " << this->_name << std::endl;
	*this = obj;
}

SuperTrap&	SuperTrap::operator=(const SuperTrap& obj)
{
	if (PRINT)
		std::cout << "Assignation operator called" << std::endl;
	ClapTrap::operator=(obj);
	return *this;
}

unsigned int			SuperTrap::rangedAttack(std::string const & target){
	return FragTrap::rangedAttack(target);
}

unsigned int			SuperTrap::meleeAttack(std::string const & target){
	return NinjaTrap::meleeAttack(target);
}
