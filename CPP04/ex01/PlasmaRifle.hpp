/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PlasmaRifle.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:21:28 by alienard          #+#    #+#             */
/*   Updated: 2021/02/24 19:13:07 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "AWeapon.hpp"

// #ifdef DEBUG
# define PRINT 1
// #else
// # define PRINT 0
// #endif

class PlasmaRifle : public AWeapon
{
		private:

		public:
			PlasmaRifle();
			PlasmaRifle(const PlasmaRifle&);
			virtual ~PlasmaRifle();
			PlasmaRifle&	operator=(const PlasmaRifle&);
			void attack() const;
};
