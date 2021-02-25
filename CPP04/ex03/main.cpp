/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:26:54 by alienard          #+#    #+#             */
/*   Updated: 2021/02/24 20:21:18 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "IMateriaSource.hpp"
#include "MateriaSource.hpp"
#include "AMateria.hpp"
#include "Character.hpp"
#include "Cure.hpp"
#include "Ice.hpp"
#include "ICharacter.hpp"

int main()
{
	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());
	ICharacter* me = new Character("me");
	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);
	ICharacter* bob = new Character("bob");
	me->use(0, *bob);
	me->use(1, *bob);
	delete bob;
	delete me;
	delete src;

	IMateriaSource* test = new MateriaSource();
	test->learnMateria(new Ice());
	test->learnMateria(new Cure());
	test->learnMateria(new Ice());
	test->learnMateria(new Cure());
	test->learnMateria(new Ice());
	test->learnMateria(new Cure());
	ICharacter* you = new Character("you");
	AMateria* tmp0;
	tmp0 = test->createMateria("ice");
	you->equip(tmp0);
	tmp0 = test->createMateria("cure");
	you->equip(tmp0);
	tmp0 = test->createMateria("ice");
	you->equip(tmp0);
	tmp0 = test->createMateria("cure");
	you->equip(tmp0);
	tmp0 = test->createMateria("cake");
	you->equip(tmp0);
	tmp0 = test->createMateria("test");
	you->equip(tmp0);
	ICharacter* tom = new Character("tom");
	you->use(0, *tom);
	you->use(1, *tom);
	you->use(2, *tom);
	you->use(3, *tom);
	you->use(4, *tom);
	you->use(-12, *tom);
	delete tom;
	delete you;
	delete test;

	return 0;
}
