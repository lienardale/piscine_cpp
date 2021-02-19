/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:14:54 by alienard          #+#    #+#             */
/*   Updated: 2021/02/19 11:48:57 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

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
	std::string	name;
	ClapTrap	CT(500, 500, 500, 500, 5, "Relou_en_chef", 100, 100, 20, "CL4P-TP");
	name = "THE DESTROYER";
	FragTrap FT(name);
	name = "T0m_SC4V0";
	ScavTrap ST(name);
	name = "N4RUT0";
	NinjaTrap NT_0(name);
	name = "S4SUK3";
	NinjaTrap NT_1(name);
	srand(time(0));

	NT_0.ninjaShoebox(CT);
	std::cout << std::endl;
	NT_1.ninjaShoebox(FT);
	std::cout << std::endl;
	NT_0.ninjaShoebox(ST);
	std::cout << std::endl;
	NT_0.ninjaShoebox(NT_1);
	std::cout << std::endl;
	return 0;
}