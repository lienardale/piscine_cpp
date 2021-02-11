/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 17:10:52 by alienard          #+#    #+#             */
/*   Updated: 2021/02/11 12:06:43 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Zombie
{
	private:
		std::string	_name;
		std::string	_type;

	public:
		void announce( void );
		void set_name( std::string name );
		void set_type( std::string type );
		std::string	get_name( void );
		std::string	get_type( void );
		Zombie();
		~Zombie();
};

#endif