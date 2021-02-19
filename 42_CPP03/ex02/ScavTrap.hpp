/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:13:32 by alienard          #+#    #+#             */
/*   Updated: 2021/02/18 17:12:30 by alienard         ###   ########.fr       */
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

class ScavTrap : public ClapTrap
{
		private:

		public:
			ScavTrap();
			ScavTrap(std::string name);
			ScavTrap(const ScavTrap&);
			~ScavTrap();
			ScavTrap&	operator=(const ScavTrap&);
			unsigned int		challengeNewcomer(std::string const & target);
};