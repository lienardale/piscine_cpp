/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:13:57 by alienard          #+#    #+#             */
/*   Updated: 2021/02/16 12:13:57 by alienard         ###   ########.fr       */
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

class ClapTrap
{
		private:

		public:
			ClapTrap();
			ClapTrap(const ClapTrap&);
			~ClapTrap();
			ClapTrap&	operator=(const ClapTrap&);
};
