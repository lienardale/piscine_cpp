/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 10:42:18 by alienard          #+#    #+#             */
/*   Updated: 2021/02/10 17:04:44 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void	ponyOnTheStack(std::string p1, std::string p2, int p3 ){
	Pony	Tony( p1, p2, p3, "stack" );
	return ;
}

Pony	*ponyOnTheHeap(std::string p1, std::string p2, int p3 ){
	Pony	*Freddy;

	Freddy = new Pony ( p1, p2, p3, "heap" );
	return Freddy ;
}

int		main(void)
{
	Pony	*Test;

	ponyOnTheStack("Tony", "blue", 2);
	std::cout << std::endl;
	Test = ponyOnTheHeap("Freddy", "green", 5);
	delete Test;
	return 0;
}