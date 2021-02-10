/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 10:42:18 by alienard          #+#    #+#             */
/*   Updated: 2021/02/10 16:00:57 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"



int	main(void)
{
	Pony	Tony( "Tony", "blue", 2, "stack" );
	Pony	*Freddy;

	Freddy = new Pony ( "Freddy", "green", 5, "heap" );
	delete Freddy;
	return 0;
}