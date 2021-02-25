/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:25:01 by alienard          #+#    #+#             */
/*   Updated: 2021/02/24 14:27:26 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "IMateriaSource.hpp"
#include "AMateria.hpp"

#ifdef DEBUG
# define PRINT 1
#else
# define PRINT 0
#endif

class MateriaSource : public IMateriaSource
{
		private:
			AMateria*	_stuff[4];
		public:
			MateriaSource();
			MateriaSource(const MateriaSource&);
			~MateriaSource();
			MateriaSource&	operator=(const MateriaSource&);
			void learnMateria(AMateria*);
			AMateria* createMateria(std::string const & type);
};
