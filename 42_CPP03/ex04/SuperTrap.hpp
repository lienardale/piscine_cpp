/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:14:28 by alienard          #+#    #+#             */
/*   Updated: 2021/02/19 20:10:16 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

// #ifdef DEBUG
# define PRINT 1
// #else
// # define PRINT 0
// #endif

class SuperTrap : public FragTrap, public NinjaTrap
{
		private:
			using FragTrap::_hit_points;
			using FragTrap::_max_hit_points;
			using NinjaTrap::_energy_points;
			using NinjaTrap::_max_energy_points;
			using NinjaTrap::_melee_attack_damage;
			using FragTrap::_range_attack_damage;
			using FragTrap::_armor_damage_reduction;
		public:
			SuperTrap();
			SuperTrap(std::string name);
			SuperTrap(const SuperTrap&);
			~SuperTrap();
			SuperTrap&	operator=(const SuperTrap&);
			unsigned int		rangedAttack(std::string const & target);
			unsigned int		meleeAttack(std::string const & target);
};
