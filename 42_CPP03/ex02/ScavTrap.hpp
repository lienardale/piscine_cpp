/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:13:32 by alienard          #+#    #+#             */
/*   Updated: 2021/02/18 12:20:17 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "FragTrap.hpp"

// #ifdef DEBUG
# define PRINT 1
// #else
// # define PRINT 0
// #endif

class ScavTrap
{
		private:
			int			_hit_points;
			int			_max_hit_points;
			int			_energy_points;
			int			_max_energy_points;
			int			_level;
			std::string	_name;
			int			_melee_attack_damage;
			int			_range_attack_damage;
			int			_armor_damage_reduction;
		public:
			ScavTrap();
			ScavTrap(std::string name);
			ScavTrap(const ScavTrap&);
			~ScavTrap();
			ScavTrap&	operator=(const ScavTrap&);
			unsigned int		rangedAttack(std::string const & target);
			unsigned int		meleeAttack(std::string const & target);
			void	takeDamage(unsigned int amount);
			void	beRepaired(unsigned int amount);
			unsigned int		challengeNewcomer(std::string const & target);
			int		get_hit_points(void);
			void	set_hit_points(int hp);
			std::string		get_name(void);
};
