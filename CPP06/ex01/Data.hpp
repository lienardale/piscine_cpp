/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 17:05:32 by alienard          #+#    #+#             */
/*   Updated: 2021/03/02 17:21:40 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

#ifdef DEBUG
# define PRINT 1
#else
# define PRINT 0
#endif

struct Data
{
	std::string	s1;
	int			n;
	std::string	s2;
};

std::ostream & operator<<(std::ostream & o, Data const & data);

void *	serialize(void);
Data *	deserialize(void * raw);