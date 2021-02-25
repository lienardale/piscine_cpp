/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TacticalMarine.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:23:23 by alienard          #+#    #+#             */
/*   Updated: 2021/02/24 19:42:27 by alienard         ###   ########.fr       */
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

class TacticalMarine : virtual public ISpaceMarine
{
		private:
			ISquad			*_squad;
			ISpaceMarine	*_next;
		public:
			TacticalMarine();
			TacticalMarine(const TacticalMarine&);
			~TacticalMarine();
			TacticalMarine&	operator=(const TacticalMarine&);
			ISpaceMarine* clone() const;
			void battleCry() const;
			void rangedAttack() const;
			void meleeAttack() const;
			ISquad *getSquad();
			void setSquad(ISquad* tmp);
			ISpaceMarine *getNext();
			void setNext(ISpaceMarine*);
};
