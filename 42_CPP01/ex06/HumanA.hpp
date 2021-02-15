/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 10:37:34 by alienard          #+#    #+#             */
/*   Updated: 2021/02/15 11:47:10 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA
{
	private:
		/* data */
		std::string	_name;
		//since constructor initialises and weapon does not change (only its type),
		//we can use a reference -> a constant, never dereferenced, never null, pointer
		Weapon		&_weapon;
	public:
		void	attack();
		//we use a reference to the weapon, to be able to change its type, otherwise type will not be modified in weapon::settype
		HumanA(std::string name, Weapon &weapon);
		~HumanA();
};

#endif
