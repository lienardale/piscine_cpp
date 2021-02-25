/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:25:00 by alienard          #+#    #+#             */
/*   Updated: 2021/02/25 11:27:05 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	// if (PRINT)
	// 	std::cout << "Constructor called" << std::endl;
}

Cure::~Cure()
{
	// if (PRINT)
	// 	std::cout << "Destructor called" << std::endl;

}

Cure::Cure(const Cure& obj) : AMateria("cure")
{
	// if (PRINT)
	// 	std::cout << "Copy Constructor called" << std::endl;
	*this = obj;
}

Cure&	Cure::operator=(const Cure& obj)
{
	AMateria::operator=(obj);
	// if (PRINT)
	// 	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

AMateria *	Cure::clone() const{
	AMateria * clone = new Cure();
	*clone = *this;
	return clone;
}

void Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "’s wounds *"<< std::endl;
	AMateria::use(target);
}
