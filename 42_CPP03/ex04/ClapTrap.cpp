/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:13:57 by alienard          #+#    #+#             */
/*   Updated: 2021/02/19 15:53:53 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _hit_points(100), _max_hit_points(100), _energy_points(100), _max_energy_points(100),
							_level(1), _name("Unknow"), _melee_attack_damage(30), _range_attack_damage(20),
							_armor_damage_reduction(5), _type("CL4P_TP") {
	if (PRINT)
		std::cout << "CL4P-TP Default Constructor called. " << std::endl ;//<< "CL4P-TP "<< this->_name << " : Séquence d'initiation terminée. Bonjour, je suis votre nouveau robot multifonction. Nom : " << this->_name << ". Robot d'Hyperion classe C. Veuillez régler les paramètres d'usine en fonction de vos besoin avant déploiement." << std::endl;
}

ClapTrap::ClapTrap(std::string name) : _hit_points(100), _max_hit_points(100), _energy_points(100), _max_energy_points(100),
							_level(1), _name(name), _melee_attack_damage(30), _range_attack_damage(20),
							_armor_damage_reduction(5), _type("CL4P_TP") {
	if (PRINT)
		std::cout << "CL4P-TP Name Constructor called. " << std::endl ;//<< "CL4P-TP "<< this->_name << " : Séquence d'initiation terminée. Bonjour, je suis votre nouveau robot multifonction. Nom : " << this->_name << ". Robot d'Hyperion classe C. Veuillez régler les paramètres d'usine en fonction de vos besoin avant déploiement." << std::endl;
}

ClapTrap::ClapTrap(int hit_points, int max_hit_points, int energy_points, int max_energy_points, int level, std::string name,
				int melee_attack_damage, int range_attack_damage, int armor_damage_reduction, std::string type) :
				_hit_points(hit_points), _max_hit_points(max_hit_points), _energy_points(energy_points), _max_energy_points(max_energy_points),
				_level(level), _name(name), _melee_attack_damage(melee_attack_damage), _range_attack_damage(range_attack_damage),
				_armor_damage_reduction(armor_damage_reduction), _type(type){
	if (PRINT)
		std::cout << "CL4P-TP Constructor called. " << std::endl ;//<< this->_type << " "<< this->_name << " : Séquence d'initiation terminée. Bonjour, je suis votre nouveau robot multifonction. Nom : " << this->_name << ". Robot d'Hyperion classe C. Veuillez régler les paramètres d'usine en fonction de vos besoin avant déploiement." << std::endl;
	if (this->_type.compare("CL4P-TP") == 0)
		std::cout << this->_name << " : Séquence d'initiation terminée. Bonjour, je suis votre nouveau robot multifonction. Nom : " << this->_name << std::endl;
}

ClapTrap::~ClapTrap()
{
	if (this->_type.compare("CL4P-TP") == 0)
		std::cout << this->_name << " : OK. Merci de m'avoir donné une deuxième chance Dieu. C'est vraiment trop sympa. " << std::endl;;
	if (PRINT)
		std::cout << "CL4P-TP Destructor called. " << std::endl ;//<< this->_type << " "<< this->_name << " : OK. Merci de m'avoir donné une deuxième chance Dieu. C'est vraiment trop sympa." << std::endl;
		
}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
	if (PRINT)
		std::cout << "CL4P-TP Copy Constructor called. " ;//<< std::endl ;//<< this->_type << " "<< this->_name << " : Séquence d'initiation terminée. Bonjour, je suis votre nouveau robot multifonction. Nom : " << this->_name << ". Robot d'Hyperion classe C. Veuillez régler les paramètres d'usine en fonction de vos besoin avant déploiement." << std::endl;
	*this = obj;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& obj)
{
	if (PRINT)
		std::cout << "CL4P-TP Frag Assignation Operator called. " ;//<< std::endl ;//<< this->_type << " "<< this->_name << " : Séquence d'initiation terminée. Bonjour, je suis votre nouveau robot multifonction. Nom : " << this->_name << ". Robot d'Hyperion classe C. Veuillez régler les paramètres d'usine en fonction de vos besoin avant déploiement." << std::endl;
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

unsigned int			ClapTrap::rangedAttack(std::string const & target){
	if (this->_energy_points > 0){
		std::cout << this->_type << " "<< this->_name << " attacks " << target << " at range, causing " << this->_range_attack_damage << " points of damage ! (without armor reduction)" << std::endl;
		std::cout << this->_type << " "<< this->_name  << " : Touché." << std::endl;
		return (this->_range_attack_damage);
	}
	return 0;
}

unsigned int			ClapTrap::meleeAttack(std::string const & target){
	if (this->_energy_points >= 0){
		std::cout << this->_type << " "<< this->_name << " attacks " << target << " in melee, causing " << this->_melee_attack_damage << " points of damage ! (without armor reduction)" << std::endl;
		std::cout << this->_type << " "<< this->_name  << " : HUSS !" << std::endl;
		return (this->_melee_attack_damage);
	}
	return 0;
}

void	ClapTrap::takeDamage(unsigned int amount){
	unsigned int armor;

	armor = (unsigned int)this->_armor_damage_reduction;
	if (amount == 0 || armor >= amount)
		std::cout << this->_type << " "<< this->_name << " takes 0 damage points." << std::endl;
	else
		std::cout << this->_type << " "<< this->_name << " takes " << amount - this->_armor_damage_reduction << " damage points." << std::endl;
	if (amount > 0)
		this->_hit_points -= amount - this->_armor_damage_reduction;
	if ( this->_hit_points <= 0 ){
		this->_hit_points = 0;
		std::cout << this->_type << " "<< this->_name << " is dead." << std::endl;
	}
	else
		std::cout << this->_type << " "<< this->_name << " : " << this->_hit_points << " HP left." << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount){
	std::cout << this->_type << " "<< this->_name << " is being repaired.";
	this->_hit_points += amount;
	if (this->_hit_points > this->_max_hit_points)
		this->_hit_points = this->_max_hit_points;
	std::cout << " " << this->_hit_points << " HP left." << std::endl;
}

int		ClapTrap::get_hit_points(void){
	return this->_hit_points;
}

void		ClapTrap::set_hit_points(int hp){
	this->_hit_points = hp;
	return ;
}

std::string		ClapTrap::get_name(void){
	return this->_name;
}

std::string		ClapTrap::get_type(void){
	return this->_type;
}

int				ClapTrap::get_melee_attack_damage(void){
	return this->_melee_attack_damage;
}

int				ClapTrap::get_range_attack_damage(void){
	return this->_range_attack_damage;
}

int				ClapTrap::get_armor_damage_reduction(void){
	return this->_armor_damage_reduction;
}
