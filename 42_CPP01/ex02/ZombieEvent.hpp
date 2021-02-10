/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 17:11:29 by alienard          #+#    #+#             */
/*   Updated: 2021/02/10 17:22:14 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include <iostream>
# include <iomanip>
# include <string>

class ZombieEvent
{
	private:
		// std::string	_name;
		// std::string	_color;
		// int			_age;
		// std::string	_allocation;

	public:
		void setZombieType( void );
		ZombieEvent();
		~ZombieEvent();
};

#endif