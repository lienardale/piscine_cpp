/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:25:00 by alienard          #+#    #+#             */
/*   Updated: 2021/02/24 14:27:17 by alienard         ###   ########.fr       */
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

class Cure : public AMateria
{
		private:

		public:
			Cure();
			Cure(const Cure&);
			~Cure();
			Cure&	operator=(const Cure&);
			AMateria* clone() const;
			void use(ICharacter& target);
};
