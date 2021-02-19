/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:13:04 by alienard          #+#    #+#             */
/*   Updated: 2021/02/19 10:39:20 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "ClapTrap.hpp"

// #ifdef DEBUG
# define PRINT 1
// #else
// # define PRINT 0
// #endif

class FragTrap : public ClapTrap
{
		private:

		public:
			FragTrap(void);
			FragTrap(std::string name);
			FragTrap(const FragTrap&);
			~FragTrap();
			FragTrap&	operator=(const FragTrap&);
			unsigned int		vaulthunter_dot_exe(std::string const & target);
};
