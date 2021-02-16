/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieEvent.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 17:11:29 by alienard          #+#    #+#             */
/*   Updated: 2021/02/11 15:45:17 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"

class ZombieEvent
{
	private:
		std::string	_set_type;
	public:
		void		setZombieType( std::string type );
		std::string	getZombieType( void );
		Zombie		*newZombie( std::string name );
		void		randomChump( void );
		ZombieEvent();
		~ZombieEvent();
};

#endif