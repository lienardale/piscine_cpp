/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:20:32 by alienard          #+#    #+#             */
/*   Updated: 2021/02/24 19:03:17 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Newcomer.hpp"

int main()
{
	Sorcerer robert("Robert", "the Magnificent");
	Victim jim("Jimmy");
	Peon joe("Joe");
	Newcomer Jenny("Jenny");
	std::cout << robert << jim << joe << Jenny;
	robert.polymorph(jim);
	robert.polymorph(joe);
	robert.polymorph(Jenny);

	Sorcerer albus("Albus", "the Great");
	Victim harry("Harry");
	Peon hagrid("Hagrid");
	Newcomer tom("Tom");
	std::cout << albus << harry << hagrid << tom;
	albus.polymorph(harry);
	albus.polymorph(hagrid);
	albus.polymorph(tom);
	return 0;
}
