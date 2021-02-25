/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Newcomer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 16:41:54 by alienard          #+#    #+#             */
/*   Updated: 2021/02/24 19:08:00 by alienard         ###   ########.fr       */
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

class Newcomer : public Victim
{
		private:
			Newcomer();
		public:
			Newcomer(std::string name);
			Newcomer(const Newcomer&);
			virtual ~Newcomer();
			Newcomer&	operator=(const Newcomer&);
			void getPolymorphed() const;
};
