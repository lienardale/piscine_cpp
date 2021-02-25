/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:24:59 by alienard          #+#    #+#             */
/*   Updated: 2021/02/25 11:27:17 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	// if (PRINT)
	// 	std::cout << "Constructor called" << std::endl;

}

Ice::~Ice()
{
	// if (PRINT)
	// 	std::cout << "Destructor called" << std::endl;

}

Ice::Ice(const Ice& obj) : AMateria("ice")
{
	// if (PRINT)
	// 	std::cout << "Copy Constructor called" << std::endl;
	*this = obj;
}

Ice&	Ice::operator=(const Ice& obj)
{
	AMateria::operator=(obj);
	// if (PRINT)
	// 	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

AMateria *	Ice::clone() const{
	AMateria * clone = new Ice();
	*clone = *this;
	return clone;
}

void Ice::use(ICharacter& target){
	std::cout << "* shoots an ice bolt at " << target.getName() << " *"<< std::endl;
	AMateria::use(target);
}
