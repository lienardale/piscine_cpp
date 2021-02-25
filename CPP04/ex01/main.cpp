/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:22:03 by alienard          #+#    #+#             */
/*   Updated: 2021/02/24 19:28:13 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "Enemy.hpp"
#include "AWeapon.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"
#include "MegaBwork.hpp"
#include "PowerFist.hpp"
#include "PlasmaRifle.hpp"

int main()
{
	Character* me = new Character("me");
	std::cout << *me;
	Enemy* b = new RadScorpion();
	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();
	me->equip(pr);
	std::cout << *me;
	me->equip(pf);
	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	Enemy* c = new MegaBwork();
	me->attack(c);
	std::cout << *me;
	me->attack(c);
	std::cout << *me;
	me->attack(c);
	std::cout << *me;
	me->attack(c);
	std::cout << *me;
	Character* you = new Character("you");
	you->attack(c);
	you->equip(pf);
	you->attack(c);
	std::cout << *you;
	you->attack(c);
	std::cout << *you;
	you->attack(c);
	std::cout << *you;
	return 0;
}
