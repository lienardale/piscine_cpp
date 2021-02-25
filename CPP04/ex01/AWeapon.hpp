/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AWeapon.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:21:28 by alienard          #+#    #+#             */
/*   Updated: 2021/02/22 21:15:56 by alienard         ###   ########.fr       */
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

class AWeapon
{
	protected:
		std::string	_name;
		int			_damage;
		int			_apcost;
	private:
		AWeapon();
	public:
		AWeapon(std::string const & name, int apcost, int damage);
		virtual ~AWeapon();
		AWeapon(AWeapon const & src);
		AWeapon &	operator=(AWeapon const &obj);
		std::string const & getName() const;
		int getAPCost() const;
		int getDamage() const;
		virtual void attack() const = 0;
};
