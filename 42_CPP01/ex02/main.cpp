/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 17:10:34 by alienard          #+#    #+#             */
/*   Updated: 2021/02/11 12:50:40 by alienard         ###   ########.fr       */
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
	delete zombie;
	zombie = zombie_event.newZombie("Zombie-Michel");
	zombie->announce();
	delete zombie;

	std::cout << std::endl;
	zombie_event.setZombieType("Pretty Zombie");

	zombie_event.randomChump();
	zombie_event.randomChump();
	zombie_event.randomChump();
	zombie_event.randomChump();
	zombie_event.randomChump();

	return (0);
}