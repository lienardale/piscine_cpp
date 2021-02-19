/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:14:54 by alienard          #+#    #+#             */
/*   Updated: 2021/02/19 19:38:22 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

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


	fight_simulation(&four, &five);

	return 0;
}
