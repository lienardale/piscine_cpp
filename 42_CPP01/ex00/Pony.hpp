/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Pony.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/10 10:40:25 by alienard          #+#    #+#             */
/*   Updated: 2021/02/10 10:49:21 by alienard         ###   ########.fr       */
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
		std::string	_sex;
		int			_worth;
		std::string	_personnality;

	public:
		
		Pony();
		~Pony();
};

#endif