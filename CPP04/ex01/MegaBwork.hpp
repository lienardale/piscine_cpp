/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MegaBwork.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/24 19:17:01 by alienard          #+#    #+#             */
/*   Updated: 2021/02/24 19:18:17 by alienard         ###   ########.fr       */
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

class MegaBwork : public Enemy
{
		private:

		public:
			MegaBwork();
			MegaBwork(const MegaBwork&);
			virtual ~MegaBwork();
			MegaBwork&	operator=(const MegaBwork&);
			void takeDamage(int);
};
