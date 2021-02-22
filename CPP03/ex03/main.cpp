/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:14:54 by alienard          #+#    #+#             */
/*   Updated: 2021/02/19 11:52:34 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

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