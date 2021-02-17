/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:13:04 by alienard          #+#    #+#             */
/*   Updated: 2021/02/17 16:42:00 by alienard         ###   ########.fr       */
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
			int			_melee_attack_damage;
			int			_range_attack_damage;
			int			_armor_damage_reduction;
		public:
			FragTrap(void);
			FragTrap(std::string name);
			FragTrap(const FragTrap&);
			~FragTrap();
			FragTrap&	operator=(const FragTrap&);
			int		rangedAttack(std::string const & target);
			int		meleeAttack(std::string const & target);
			void	takeDamage(unsigned int amount);
			void	beRepaired(unsigned int amount);
			int		vaulthunter_dot_exe(std::string const & target);
};
