/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:14:13 by alienard          #+#    #+#             */
/*   Updated: 2021/02/19 11:00:18 by alienard         ###   ########.fr       */
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

class NinjaTrap : public ClapTrap
{
		private:

		public:
			NinjaTrap();
			NinjaTrap(std::string name);
			NinjaTrap(const NinjaTrap&);
			~NinjaTrap();
			NinjaTrap&	operator=(const NinjaTrap&);
			unsigned int		ninjaShoebox(ClapTrap& obj);
			unsigned int		ninjaShoebox(FragTrap& obj);
			unsigned int		ninjaShoebox(ScavTrap& obj);
			unsigned int		ninjaShoebox(NinjaTrap& obj);
};
