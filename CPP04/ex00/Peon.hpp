/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:19:46 by alienard          #+#    #+#             */
/*   Updated: 2021/02/24 19:07:44 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "Victim.hpp"

// #ifdef DEBUG
# define PRINT 1
// #else
// # define PRINT 0
// #endif

class Peon : public Victim
{
		private:
			Peon();
		public:
			Peon(std::string name);
			Peon(const Peon&);
			virtual ~Peon();
			Peon&	operator=(const Peon&);
			void getPolymorphed() const;
};
