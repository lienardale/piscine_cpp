/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Enemy.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:21:29 by alienard          #+#    #+#             */
/*   Updated: 2021/02/22 21:06:22 by alienard         ###   ########.fr       */
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

class Enemy
{
		private:
			Enemy();
		protected:
			int			_hp;
			std::string	_type;
		public:
			Enemy(int hp, std::string const & type);
			Enemy(const Enemy&);
			virtual ~Enemy();
			Enemy&	operator=(const Enemy&);
			std::string const & getType() const;
			int getHP() const;
			virtual void takeDamage(int);
};
