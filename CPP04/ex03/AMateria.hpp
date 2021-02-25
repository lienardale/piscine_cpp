/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:24:59 by alienard          #+#    #+#             */
/*   Updated: 2021/02/24 14:27:05 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "ICharacter.hpp"

#ifdef DEBUG
# define PRINT 1
#else
# define PRINT 0
#endif

class ICharacter;

class AMateria
{
		private:
			unsigned int	_xp;
			std::string		_type;
			AMateria();
		public:
			AMateria(std::string const & type);
			AMateria(const AMateria&);
			virtual ~AMateria();
			AMateria&	operator=(const AMateria&);
			std::string const & getType() const; //Returns the materia type
			unsigned int getXP() const; //Returns the Materia's XP
			virtual AMateria* clone() const = 0;
			virtual void use(ICharacter& target);
};
