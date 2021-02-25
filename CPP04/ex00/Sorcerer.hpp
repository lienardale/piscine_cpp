/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Sorcerer.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:19:45 by alienard          #+#    #+#             */
/*   Updated: 2021/02/22 16:28:43 by alienard         ###   ########.fr       */
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

class Sorcerer
{
		private:
			std::string	_name;
			std::string	_title;
			Sorcerer();
		public:
			Sorcerer(std::string name, std::string tittle);
			Sorcerer(const Sorcerer&);
			~Sorcerer();
			Sorcerer&	operator=(const Sorcerer&);
			std::string	get_name(void) const;
			std::string	get_title(void) const;
			void		polymorph(Victim const & victim);
};

std::ostream &	operator<<(std::ostream& os, const Sorcerer& src);
