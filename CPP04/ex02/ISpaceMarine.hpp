/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ISpaceMarine.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:23:24 by alienard          #+#    #+#             */
/*   Updated: 2021/02/24 19:43:54 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "ISquad.hpp"

// #ifdef DEBUG
# define PRINT 1
// #else
// # define PRINT 0
// #endif

class ISquad;

class ISpaceMarine
{
		public:
			virtual ~ISpaceMarine() {}
			virtual ISpaceMarine* clone() const = 0;
			virtual void battleCry() const = 0;
			virtual void rangedAttack() const = 0;
			virtual void meleeAttack() const = 0;
			virtual ISquad *getSquad() = 0;
			virtual void setSquad(ISquad* tmp) = 0;
			virtual ISpaceMarine *getNext() = 0;
			virtual void setNext(ISpaceMarine* tmp) = 0;
};
