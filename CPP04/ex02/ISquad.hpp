/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISquad.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:23:25 by alienard          #+#    #+#             */
/*   Updated: 2021/02/24 19:43:39 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "ISpaceMarine.hpp"

// #ifdef DEBUG
# define PRINT 1
// #else
// # define PRINT 0
// #endif

class ISpaceMarine;

class ISquad
{
		public:
			virtual ~ISquad() {}
			virtual int getCount() const = 0;
			virtual ISpaceMarine* getUnit(int) const = 0;
			virtual int push(ISpaceMarine*) = 0;
};
