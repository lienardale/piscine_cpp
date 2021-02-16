/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 15:36:39 by alienard          #+#    #+#             */
/*   Updated: 2021/02/12 16:07:44 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"

int	main(void)
{
	ZombieHorde	*Horde_on_heap;
	ZombieHorde	Horde_on_stack(2);

	std::cout << "First, a small horde of two zombies on the stack" <<std::endl;
	Horde_on_stack.announce();

	std::cout << "Then, a big horde of ten zombies on the heap..." <<std::endl;
	Horde_on_heap = new ZombieHorde(10);
	Horde_on_heap->announce();
	delete Horde_on_heap;

	std::cout << "... a normal horde of five zombies on the heap ..." <<std::endl;
	Horde_on_heap = new ZombieHorde(5);
	Horde_on_heap->announce();
	delete Horde_on_heap;

	std::cout << "... and finally, a non-existant horde of 0 zombies on the heap" <<std::endl;
	Horde_on_heap = new ZombieHorde(0);
	Horde_on_heap->announce();
	delete Horde_on_heap;

	return (0);
}