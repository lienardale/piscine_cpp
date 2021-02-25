/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:24:59 by alienard          #+#    #+#             */
/*   Updated: 2021/02/24 14:27:10 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "AMateria.hpp"

#ifdef DEBUG
# define PRINT 1
#else
# define PRINT 0
#endif

class Ice : public AMateria
{
		private:

		public:
			Ice();
			Ice(const Ice&);
			~Ice();
			Ice&	operator=(const Ice&);
			AMateria* clone() const;
			void use(ICharacter& target);
};
