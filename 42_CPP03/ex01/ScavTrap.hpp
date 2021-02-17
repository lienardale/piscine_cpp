/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:13:32 by alienard          #+#    #+#             */
/*   Updated: 2021/02/16 12:13:32 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

#ifdef DEBUG
# define PRINT 1
#else
# define PRINT 0
#endif

class ScavTrap
{
		private:

		public:
			ScavTrap();
			ScavTrap(const ScavTrap&);
			~ScavTrap();
			ScavTrap&	operator=(const ScavTrap&);
};
