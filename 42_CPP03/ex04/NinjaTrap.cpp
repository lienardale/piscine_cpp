/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:14:13 by alienard          #+#    #+#             */
/*   Updated: 2021/02/19 15:47:28 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(): ClapTrap(60, 60, 120, 120, 1, "Unknown", 60, 5, 0, "N1NJ4-TP")
{
	if (PRINT)
		std::cout << "N1NJ4-TP Default Constructor called. " << this->_type << " " << this->_name << " : Séquence d'initiation terminée. Bonjour, je suis votre nouveau robot multifonction. Nom : " << this->_name << std::endl;

}

NinjaTrap::NinjaTrap(std::string name): ClapTrap(60, 60, 120, 120, 1, name, 60, 5, 0, "N1NJ4-TP")
{
	if (PRINT)
		std::cout << "N1NJ4-TP Constructor called. " << this->_type << " " << this->_name << " : Séquence d'initiation terminée. Bonjour, je suis votre nouveau robot multifonction. Nom : " << this->_name << std::endl;
}

NinjaTrap::~NinjaTrap()
{
	if (PRINT)
		std::cout << "N1NJ4-TP Destructor called. " << this->_type << " " << this->_name << " : OK. Merci de m'avoir donné une deuxième chance Dieu. C'est vraiment trop sympa. " << std::endl;
}

NinjaTrap::NinjaTrap(const NinjaTrap& obj)
{
	if (PRINT)
		std::cout << "N1NJ4-TP Copy Constructor called. " << this->_type << " " << this->_name << " : Séquence d'initiation terminée. Bonjour, je suis votre nouveau robot multifonction. Nom : " << this->_name << std::endl;
	*this = obj;
}

NinjaTrap&	NinjaTrap::operator=(const NinjaTrap& obj)
{
	if (PRINT)
		std::cout << "N1NJ4-TP Assignation Operator called. " << this->_type << " " << this->_name << " : Séquence d'initiation terminée. Bonjour, je suis votre nouveau robot multifonction. Nom : " << this->_name << std::endl;
	ClapTrap::operator=(obj);
	return *this;
}

unsigned int		NinjaTrap::ninjaShoebox(ClapTrap& obj){
	std::cout << this->_type << " " << this->_name << " encounters " << obj.get_type() << " " << obj.get_name() << std::endl;
	std::cout << this->_name << " recognises a member of the parent class, bows before him before reparing him." << std::endl;
	obj.beRepaired(20);
	return (0);
}

unsigned int		NinjaTrap::ninjaShoebox(FragTrap& obj){
	std::string	winner_name;
	std::string	winner_type;
	int			winner_hp;

	std::cout << this->_type << " " << this->_name << " encounters " << obj.get_type() << " " << obj.get_name() << std::endl;
	std::cout << "THEY FIGHT BECAUSE THEY ARE MORTAL ENEMIES" << std::endl;
	while(this->get_hit_points() > 0 && obj.get_hit_points() > 0)
	{
		obj.takeDamage(this->meleeAttack(obj.get_name()));
		if (obj.get_hit_points() > 0)
			this->takeDamage(obj.vaulthunter_dot_exe(this->get_name()));
		std::cout << std::endl;
	}
	if (this->get_hit_points() > 0 ){
		winner_hp = this->get_hit_points();
		winner_name = this->get_name();
		winner_type = this->get_type();
	}
	else{
		winner_hp = obj.get_hit_points();
		winner_name = obj.get_name();
		winner_type = obj.get_type();
	}
	std::cout << winner_type << " " << winner_name << " won the fight, " << winner_hp << " hp left."<< std::endl;
	return (0);
}

unsigned int		NinjaTrap::ninjaShoebox(ScavTrap& obj){
	unsigned int	challenge_nb;
	std::cout << this->_type << " " << this->_name << " encounters " << obj.get_type() << " "<< obj.get_name() << std::endl;
	// std::cout << "" << std::endl;
	challenge_nb = obj.challengeNewcomer(this->_name);
	switch (challenge_nb)
	{
	case 0:
		std::cout << this->_type << " " << this->_name << " : FRAAAAAAAAAAAAAAAFFFP" << std::endl;
		std::cout << obj.get_type() << " "<< obj.get_name() << " is blown away by such a big fart." << std::endl;
		break;
	case 1:
		std::cout << this->_type << " " << this->_name << " : BBBBBRRRROOOOOOOOOOP" << std::endl;
		std::cout << obj.get_type() << " "<< obj.get_name() << " segfaults because of such a stingy smell." << std::endl;
		obj.takeDamage(5000);
		break;
	case 2:
		std::cout << this->_type << " " << this->_name << " : I like James Blunt." << std::endl;
		std::cout << obj.get_type() << " "<< obj.get_name() << " hugs " << this->_type << " " << this->_name << std::endl;
		break;
	case 3:
		std::cout << this->_type << " " << this->_name << " : But, you know, I don't think there is a good or bad situation. If I had to sum up my life with you today, I would say that it was first of all encounters, people who reached out to me, perhaps at a time when I couldn't, when I was alone at home. And it's rather curious to think that chance, encounters forge a destiny... Because when you have a taste for the thing, when you have a taste for the well done, the beautiful gesture, sometimes you don't find the interlocutor in front of you, I would say, the mirror that helps you move forward. So that's not my case, as I was saying there, since I, on the contrary, I could; and I say thank you to life, I say thank you to it, I sing life, I dance life... I am only love! And finally, when many people today say to me: \"But how do you get this humanity? \"Well, I answer them very simply, I tell them that it is this taste for love, this taste that pushed me today to undertake mechanical construction, but tomorrow, who knows, perhaps simply to put myself at the service of the community, to make the gift, the gift of self..." << std::endl;
		break;
	default:
		std::cout << this->_type << " " << this->_name << " folds the face of this un-funny joker." << std::endl;
		obj.takeDamage(5000);
		break;
	}
	return (0);
}

unsigned int		NinjaTrap::ninjaShoebox(NinjaTrap& obj){
	std::cout << this->_type << " " << this->_name << " encounters " << obj.get_type() << " "<< obj.get_name() << std::endl;
	std::cout << "They repare each other and become BFF." << std::endl;
	obj.beRepaired(20);
	this->beRepaired(20);
	return (0);
}

unsigned int			NinjaTrap::rangedAttack(std::string const & target){
	if (this->_energy_points > 0){
		std::cout << this->_type << " "<< this->_name << " attacks " << target << " at range, causing " << this->_range_attack_damage << " points of damage ! (without armor reduction)" << std::endl;
		std::cout << this->_type << " "<< this->_name  << " : DOES THIS SHURIKEN TASTE GOOD TO YOU ?!" << std::endl;
		return (this->_range_attack_damage);
	}
	return 0;
}

unsigned int			NinjaTrap::meleeAttack(std::string const & target){
	if (this->_energy_points >= 0){
		std::cout << this->_type << " "<< this->_name << " attacks " << target << " in melee, causing " << this->_melee_attack_damage << " points of damage ! (without armor reduction)" << std::endl;
		std::cout << this->_type << " "<< this->_name  << " : EAT MY BLADE, PEASANT !" << std::endl;
		return (this->_melee_attack_damage);
	}
	return 0;
}
