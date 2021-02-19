/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:14:13 by alienard          #+#    #+#             */
/*   Updated: 2021/02/19 20:06:25 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"

// #ifdef DEBUG
# define PRINT 1
// #else
// # define PRINT 0
// #endif

class NinjaTrap : virtual public ClapTrap
{
		private:

		public:
			NinjaTrap();
			NinjaTrap(std::string name);
			NinjaTrap(const NinjaTrap&);
			virtual ~NinjaTrap();
			NinjaTrap&	operator=(const NinjaTrap&);
			unsigned int			ninjaShoebox(ClapTrap& obj);
			unsigned int			ninjaShoebox(FragTrap& obj);
			unsigned int			ninjaShoebox(ScavTrap& obj);
			unsigned int			ninjaShoebox(NinjaTrap& obj);
			virtual unsigned int	rangedAttack(std::string const & target);
			virtual unsigned int	meleeAttack(std::string const & target);
};
