/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 10:40:25 by alienard          #+#    #+#             */
/*   Updated: 2021/02/10 15:50:02 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <iostream>
# include <iomanip>
# include <string>

class Pony
{
	private:
		std::string	_name;
		std::string	_color;
		int			_age;
		std::string	_allocation;

	public:
		
		Pony( std::string p1, std::string	p2, int p3, std::string p4 );
		~Pony();
};

#endif