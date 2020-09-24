/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/09/24 14:28:24 by alienard          #+#    #+#             */
/*   Updated: 2020/09/24 15:03:08 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <iostream>
#include <string.h>
#include <algorithm>

int	main(int ac, char **av)
{
	int	i;
	int	j;

	if (!av || !av[0] || ac <= 1)
		return (0);
	i = 1;
	while (av[i])
	{
		j = 0;
		while (av[i][j])
		{
			av[i][j] = ::toupper(av[i][j]);
			j++;
		}
		i++;
	}
	i = 1;
	while (av[i])
	{
		write(1, av[i], strlen(av[i]));
		i++;
	}
	write(1, "\n", 1);
	return (0);
}
