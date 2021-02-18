/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:13:57 by alienard          #+#    #+#             */
/*   Updated: 2021/02/18 17:15:56 by alienard         ###   ########.fr       */
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

class ClapTrap
{
		protected:
			int			_hit_points;
			int			_max_hit_points;
			int			_energy_points;
			int			_max_energy_points;
			int			_level;
			std::string	_name;
			int			_melee_attack_damage;
			int			_range_attack_damage;
			int			_armor_damage_reduction;
			std::string	_type;
		public:
			ClapTrap(void);
			ClapTrap(int _hit_points, int _max_hit_points, int _energy_points,
				int _max_energy_points, int _level, std::string _name,
				int _melee_attack_damage, int _range_attack_damage,
				int _armor_damage_reduction, std::string _type);
			ClapTrap(const ClapTrap&);
			~ClapTrap();
			ClapTrap&	operator=(const ClapTrap&);
			unsigned int		rangedAttack(std::string const & target);
			unsigned int		meleeAttack(std::string const & target);
			void	takeDamage(unsigned int amount);
			void	beRepaired(unsigned int amount);
			int		get_hit_points(void);
			void	set_hit_points(int hp);
			std::string		get_name(void);
};
