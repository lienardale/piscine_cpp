/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RadScorpion.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:21:30 by alienard          #+#    #+#             */
/*   Updated: 2021/02/24 19:13:22 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "Enemy.hpp"

// #ifdef DEBUG
# define PRINT 1
// #else
// # define PRINT 0
// #endif

class RadScorpion : public Enemy
{
		private:

		public:
			RadScorpion();
			RadScorpion(const RadScorpion&);
			virtual ~RadScorpion();
			RadScorpion&	operator=(const RadScorpion&);
			void takeDamage(int);
};
