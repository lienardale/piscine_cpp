/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperMutant.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:21:30 by alienard          #+#    #+#             */
/*   Updated: 2021/02/24 19:18:31 by alienard         ###   ########.fr       */
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

class SuperMutant : public Enemy
{
		private:

		public:
			SuperMutant();
			SuperMutant(const SuperMutant&);
			virtual ~SuperMutant();
			SuperMutant&	operator=(const SuperMutant&);
			void takeDamage(int);
};
