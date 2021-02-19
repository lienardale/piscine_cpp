/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:14:54 by alienard          #+#    #+#             */
/*   Updated: 2021/02/19 17:03:40 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main()
{
	ClapTrap	CT(500, 500, 500, 500, 5, "Relou_en_chef", 100, 100, 20, "CL4P-TP");
	FragTrap FT("THE DESTROYER");
	ScavTrap ST("T0m_SC4V0");
	NinjaTrap NT_0("N4RUT0");
	NinjaTrap NT_1("S4SUK3");
	SuperTrap	SUPER_T("M4D4R4_UCH1H4");
	std::cout << std::endl;
	srand(time(0));

	// std::cout << "100 | " << SUPER_T.get_hit_points() << std::endl;
	// std::cout << "60  | " << SUPER_T.get_melee_attack_damage() << std::endl;
	// std::cout << "30  | " << SUPER_T.get_range_attack_damage() << std::endl;
	// std::cout << "5   | " << SUPER_T.get_armor_damage_reduction() << std::endl;
	NT_0.ninjaShoebox(CT);
	std::cout << std::endl;
	NT_1.ninjaShoebox(FT);
	std::cout << std::endl;
	NT_0.ninjaShoebox(ST);
	std::cout << std::endl;
	NT_0.ninjaShoebox(NT_1);
	std::cout << std::endl;

	CT.takeDamage(SUPER_T.rangedAttack(CT.get_name()));
	CT.takeDamage(SUPER_T.meleeAttack(CT.get_name()));
	std::cout << std::endl;
	CT.takeDamage(SUPER_T.vaulthunter_dot_exe(CT.get_name()));
	std::cout << std::endl;
	FT.beRepaired(1000);
	ST.beRepaired(1000);
	SUPER_T.ninjaShoebox(FT);
	std::cout << std::endl;
	SUPER_T.ninjaShoebox(ST);
	std::cout << std::endl;
	return 0;
}