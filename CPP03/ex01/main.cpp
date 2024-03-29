/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:14:54 by alienard          #+#    #+#             */
/*   Updated: 2021/02/22 10:37:42 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"
#include "ScavTrap.hpp"

void	fight_simulation(FragTrap *four, FragTrap *five)
{
	std::cout << std::endl;
	std::cout << "WELCOME TO THE FIGHT OF THE CENTURY" << std::endl;
	std::cout << "To my left : " << four->get_name() << " !" << std::endl;
	std::cout << "To my right : " << five->get_name() << " !" << std::endl;
	std::cout << "LET THE BATTLE...BEGIN !" << std::endl;
	std::cout << std::endl;

	std::string	winner_name;
	int			winner_hp;
	while(four->get_hit_points() > 0 && five->get_hit_points() > 0)
	{
		five->takeDamage(four->meleeAttack(five->get_name()));
		if (five->get_hit_points() > 0)
			four->takeDamage(five->vaulthunter_dot_exe(four->get_name()));
		std::cout << std::endl;
	}
	if (four->get_hit_points() > 0 ){
		winner_hp = four->get_hit_points();
		winner_name = four->get_name();
	}
	else{
		winner_hp = five->get_hit_points();
		winner_name = five->get_name();
	}
	std::cout << "FR4G-TP " << winner_name << " won the fight, " << winner_hp << " hp left."<< std::endl;
	std::cout << std::endl;
}

int main()
{
	FragTrap four("THE DESTROYER");
	FragTrap five("Puppy");

	srand(time(0));
	fight_simulation(&four, &five);
	std::cout << std::endl;

	ScavTrap	Linette_Scav0("Linette_Scav0");
	Linette_Scav0.meleeAttack("Oponent one");
	Linette_Scav0.rangedAttack("Oponent one");
	Linette_Scav0.takeDamage(50);
	Linette_Scav0.takeDamage(50);
	Linette_Scav0.takeDamage(50);
	Linette_Scav0.beRepaired(500);

	ScavTrap	Tom_Scav0("Tom_Scav0");
	Tom_Scav0.challengeNewcomer("Doctor Strange");
	Tom_Scav0.challengeNewcomer("Doctor House");
	Tom_Scav0.challengeNewcomer("Doctor Jekyll");
	Tom_Scav0.challengeNewcomer("Doctor Love");
	Tom_Scav0.challengeNewcomer("Doctor Frankenstein");
	
	std::cout << std::endl;
	return 0;
}