/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:21:31 by alienard          #+#    #+#             */
/*   Updated: 2021/02/22 20:58:42 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "AWeapon.hpp"
#include "Enemy.hpp"

// #ifdef DEBUG
# define PRINT 1
// #else
// # define PRINT 0
// #endif

class Character
{
		private:
			Character();
			std::string		_name;
			int				_ap;
			AWeapon			*_curr_w;

		public:
			Character(std::string const & name);
			Character(const Character&);
			~Character();
			Character&	operator=(const Character&);
			void recoverAP();
			void equip(AWeapon*);
			void attack(Enemy*);
			std::string const & getName() const;
			int	const & getAP() const;
			AWeapon* getWeapon() const;
};

std::ostream &	operator<<(std::ostream& os, const Character& src);
