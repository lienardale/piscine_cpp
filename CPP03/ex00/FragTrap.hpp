/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:13:04 by alienard          #+#    #+#             */
/*   Updated: 2021/02/16 12:23:08 by alienard         ###   ########.fr       */
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

class FragTrap
{
		private:
			int			_hit_points;
			int			_max_hit_points;
			int			_energy_points;
			int			_max_energy_points;
			int			_level;
			std::string	_name;
			int			_melee_attak_damage;
			int			_range_attack_damage;
			int			_armor_damage_reduction;
		public:
			FragTrap(std::string name);
			FragTrap(const FragTrap&);
			~FragTrap();
			FragTrap&	operator=(const FragTrap&);
			void	rangedAttack(std::string const & target);
			void	meleeAttack(std::string const & target);
			void	takeDamage(unsigned int amount);
			void	beRepaired(unsigned int amount);
};
