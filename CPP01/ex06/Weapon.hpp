/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 09:44:47 by alienard          #+#    #+#             */
/*   Updated: 2021/02/15 11:23:19 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <sstream>

class Weapon
{
	private:
		std::string		_type;
	public:
		const std::string&	getType(void);
		void				setType(std::string);
		Weapon(std::string wp);
		~Weapon();
};

#endif
