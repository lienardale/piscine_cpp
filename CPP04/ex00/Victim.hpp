/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Victim.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:19:46 by alienard          #+#    #+#             */
/*   Updated: 2021/02/22 16:32:10 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

// #ifdef DEBUG
# define PRINT 1
// #else
// # define PRINT 0
// #endif

class Victim
{
		protected:
			std::string	_name;
		private:
			Victim();
		public:
			Victim(std::string name);
			Victim(const Victim&);
			virtual ~Victim();
			Victim&	operator=(const Victim&);
			std::string	get_name(void) const;
			virtual void getPolymorphed() const;
};

std::ostream &	operator<<(std::ostream& os, const Victim& src);
