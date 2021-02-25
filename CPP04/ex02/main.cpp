/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:23:41 by alienard          #+#    #+#             */
/*   Updated: 2021/02/24 20:25:49 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ISpaceMarine.hpp"
#include "ISquad.hpp"
#include "Squad.hpp"
#include "AssaultTerminator.hpp"
#include "TacticalMarine.hpp"

class ISquad;
class ISpaceMarine;

int main()
{
	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;
	ISquad* vlc = new Squad;
	ISpaceMarine* jim_2 = jim;
	ISpaceMarine* jim_3(jim);

	(void)jim_2;
	(void)jim_3;

	vlc->push(bob);
	vlc->push(jim);
	vlc->push(jim);
	std::cout << std::endl;

	std::cout<< "Clones must have different addresses" <<std::endl;
	ISpaceMarine* bob2 = bob->clone();
	std::cout << bob << " | " << bob2 << std::endl;
	vlc->push(bob2);
	
	std::cout << std::endl;
	std::cout<< "-- VLC SQUAD --" <<std::endl;
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
		std::cout<< "TO THE NEXT ONE" <<std::endl;
	}
	std::cout << std::endl;

	Squad test;
	ISpaceMarine* bob4 = new TacticalMarine;
	ISpaceMarine* jim2 = new AssaultTerminator;
	test.push(bob4);
	test.push(jim2);
	std::cout << std::endl;

	std::cout<< "-- Copy test --" <<std::endl;
	Squad test1(test);
	std::cout << std::endl;
	
	std::cout<< "-- Assignation test --" <<std::endl;
	std::cout<< "First we create a squad" <<std::endl;
	Squad test2;
	std::cout << std::endl;
	std::cout<< "Then we assign it to a first one" <<std::endl;
	test2 = test;
	std::cout << std::endl;
	std::cout<< "And then to another one" <<std::endl;
	test2 = test1;
	std::cout << std::endl;

	delete vlc;
	return 0;
}
