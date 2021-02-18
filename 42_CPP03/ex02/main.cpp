/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:14:54 by alienard          #+#    #+#             */
/*   Updated: 2021/02/18 17:16:10 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

void	fight_simulation(FragTrap four, FragTrap five)
{
	std::cout << std::endl;
	std::cout << "WELCOME TO THE FIGHT OF THE CENTURY" << std::endl;
	std::cout << "To my left : " << four.get_name() << " !" << std::endl;
	std::cout << "To my right : " << five.get_name() << " !" << std::endl;
	std::cout << "LET THE BATTLE...BEGIN !" << std::endl;
	std::cout << std::endl;

	FragTrap	winner;
	while(four.get_hit_points() > 0 && five.get_hit_points() > 0)
	{
		five.takeDamage(four.meleeAttack(five.get_name()));
		if (five.get_hit_points() > 0)
			four.takeDamage(five.vaulthunter_dot_exe(four.get_name()));
		std::cout << std::endl;
	}
	if (four.get_hit_points() > 0 )
		winner = four;
	else
		winner = five;
	std::cout << "FR4G-TP " << winner.get_name() << " won the fight, " << winner.get_hit_points() << " hp left."<< std::endl;
	std::cout << std::endl;
}

int main()
{
	FragTrap one;
	FragTrap two("Bob");
	FragTrap three = two;

	std::string name4 = "THE DESTROYER";
	std::string name5 = "Puppy";
	FragTrap four(name4);
	FragTrap five(name5);

	srand(time(0));
	one.meleeAttack("Oponent one");
	one.rangedAttack("Oponent one");
	one.takeDamage(50);
	one.takeDamage(50);
	one.takeDamage(50);
	one.beRepaired(500);

	three.vaulthunter_dot_exe("Oponent two");
	three.vaulthunter_dot_exe("Oponent three");
	three.vaulthunter_dot_exe("Oponent four");
	three.vaulthunter_dot_exe("Oponent Oponent");
	three.vaulthunter_dot_exe("Himself");
	two.vaulthunter_dot_exe("You");
	two.vaulthunter_dot_exe("Me");


	fight_simulation(four, five);
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
	

	ClapTrap	CT(500, 500, 500, 500, 5, "Relou_en_chef", 100, 100, 20, "CL4P_TP");

	std::cout << std::endl;
	return 0;
}