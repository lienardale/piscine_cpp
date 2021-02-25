/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Squad.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:23:23 by alienard          #+#    #+#             */
/*   Updated: 2021/02/24 19:43:11 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <typeinfo>
#include "ISquad.hpp"

// #ifdef DEBUG
# define PRINT 1
// #else
// # define PRINT 0
// #endif

class ISquad;

class Squad : public ISquad
{
		private:
			int				_count;
			ISpaceMarine	*_beg_list;
			ISpaceMarine	*_end_list;
		public:
			Squad();
			Squad(const Squad&);
			~Squad();
			Squad&	operator=(const Squad&);
			virtual int getCount() const;
			virtual ISpaceMarine* getUnit(int) const;
			virtual int push(ISpaceMarine*);
};
