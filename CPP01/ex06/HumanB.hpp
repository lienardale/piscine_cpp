/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 10:37:38 by alienard          #+#    #+#             */
/*   Updated: 2021/02/15 11:47:37 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
	private:
		/* data */
		std::string	_name;
		//since constructor does not initializes, we cannot use reference, so we use pointer
		Weapon		*_weapon;
	public:
		void	attack();
		//we use a reference to the weapon, to be able to change its type, otherwise type will not be modified in weapon::settype
		void	setWeapon(Weapon &Weapon);
		HumanB(std::string);
		~HumanB();
};

#endif
