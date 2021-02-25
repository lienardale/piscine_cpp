/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:24:59 by alienard          #+#    #+#             */
/*   Updated: 2021/02/25 11:24:40 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	// if (PRINT)
	// 	std::cout << "Default Constructor called" << std::endl;

}

AMateria::AMateria(std::string const & type) : _xp(0), _type(type){
	// if (PRINT)
	// 	std::cout << "Constructor called" << std::endl;

}

AMateria::~AMateria()
{
	// if (PRINT)
	// 	std::cout << "Destructor called" << std::endl;

}

AMateria::AMateria(const AMateria& obj) : _xp(obj._xp), _type(obj._type)
{
	// if (PRINT)
	// 	std::cout << "Copy Constructor called" << std::endl;
}

AMateria&	AMateria::operator=(const AMateria& obj)
{
	this->_type = obj._type;
	this->_xp = obj._xp;
	// if (PRINT)
	// 	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

std::string const & AMateria::getType() const{
	return this->_type;
} //Returns the materia type


unsigned int AMateria::getXP() const{
	return this->_xp;
} //Returns the Materia's XP

void AMateria::use(ICharacter& target){
	this->_xp += 10;
	(void)target;
}
