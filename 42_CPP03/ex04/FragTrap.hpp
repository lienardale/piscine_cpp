/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:13:04 by alienard          #+#    #+#             */
/*   Updated: 2021/02/19 20:15:43 by alienard         ###   ########.fr       */
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

class FragTrap : virtual public ClapTrap
{
		private:

		public:
			FragTrap(void);
			FragTrap(std::string name);
			FragTrap(const FragTrap&);
			virtual ~FragTrap();
			FragTrap&	operator=(const FragTrap&);
			unsigned int			vaulthunter_dot_exe(std::string const & target);
			virtual unsigned int	rangedAttack(std::string const & target);
			virtual unsigned int	meleeAttack(std::string const & target);
};
