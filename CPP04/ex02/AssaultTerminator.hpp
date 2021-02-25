/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AssaultTerminator.hpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:23:23 by alienard          #+#    #+#             */
/*   Updated: 2021/02/24 19:42:34 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "ISpaceMarine.hpp"
#include "ISquad.hpp"

// #ifdef DEBUG
# define PRINT 1
// #else
// # define PRINT 0
// #endif

class ISquad;
class ISpaceMarine;

class AssaultTerminator : public ISpaceMarine
{
		private:
			ISquad			*_squad;
			ISpaceMarine	*_next;
		public:
			AssaultTerminator();
			AssaultTerminator(const AssaultTerminator&);
			~AssaultTerminator();
			AssaultTerminator&	operator=(const AssaultTerminator&);
			
			ISpaceMarine* clone() const;
			void battleCry() const;
			void rangedAttack() const;
			void meleeAttack() const;
			ISquad *getSquad();
			void setSquad(ISquad* tmp);
			ISpaceMarine *getNext();
			void setNext(ISpaceMarine*);
};
