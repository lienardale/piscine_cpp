/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PowerFist.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:21:29 by alienard          #+#    #+#             */
/*   Updated: 2021/02/24 19:13:14 by alienard         ###   ########.fr       */
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

class PowerFist : public AWeapon
{
		private:

		public:
			PowerFist();
			PowerFist(const PowerFist&);
			virtual ~PowerFist();
			PowerFist&	operator=(const PowerFist&);
			void attack() const;
};
