/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 17:10:34 by alienard          #+#    #+#             */
/*   Updated: 2021/02/11 15:59:28 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include "ZombieEvent.hpp"

int	main(void)
{
	ZombieEvent	zombie_event;
	Zombie		*zombie;

	zombie_event.setZombieType("Ugly Zombie");

	zombie = zombie_event.newZombie("Jean-Zombie");
	zombie->announce();
	// deleting it in the main because we don't know for how long the main needs it, since it is a Zombie *
	delete zombie;
	zombie = zombie_event.newZombie("Zombie-Michel");
	zombie->announce();
	delete zombie;
	zombie = zombie_event.newZombie("Jean-Michel Zombie");
	zombie->announce();
	delete zombie;
	zombie = zombie_event.newZombie("Zombie-Michel Jean");
	zombie->announce();
	delete zombie;

	std::cout << std::endl;
	zombie_event.setZombieType("Pretty Zombie");

	zombie_event.randomChump();
	// deleted at the end of the fct because on the stack -> subject explicitly asked for Zombie, not Zombie *
	zombie_event.randomChump();
	zombie_event.randomChump();
	zombie_event.randomChump();
	zombie_event.randomChump();
	zombie_event.randomChump();
	zombie_event.randomChump();
	zombie_event.randomChump();
	zombie_event.randomChump();

	return (0);
}