/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:25:00 by alienard          #+#    #+#             */
/*   Updated: 2021/02/24 14:27:21 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "ICharacter.hpp"
#include "AMateria.hpp"

#ifdef DEBUG
# define PRINT 1
#else
# define PRINT 0
#endif

class Character : public ICharacter
{
		private:
			AMateria*	_stuff[4];
			std::string	_name;
			Character();
		public:
			Character(std::string name);
			Character(const Character&);
			~Character();
			Character&	operator=(const Character&);
			std::string const & getName() const;
			void equip(AMateria* m);
			void unequip(int idx);
			void use(int idx, ICharacter& target);
};
