/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:14:54 by alienard          #+#    #+#             */
/*   Updated: 2021/02/17 17:11:13 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "FragTrap.hpp"

int main()
{
	FragTrap one;
	FragTrap two("Bob");
	FragTrap three = two;

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
	return 0;
}