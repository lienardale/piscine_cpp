/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:13:33 by alienard          #+#    #+#             */
/*   Updated: 2021/02/16 12:13:33 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	if (PRINT)
		std::cout << "Constructor called" << std::endl;

}

ScavTrap::~ScavTrap()
{
	if (PRINT)
		std::cout << "Destructor called" << std::endl;

}

ScavTrap::ScavTrap(const ScavTrap& obj)
{
	if (PRINT)
		std::cout << "Copy Constructor called" << std::endl;
	*this = obj;
}

ScavTrap&	ScavTrap::operator=(const ScavTrap& obj)
{
	if (PRINT)
		std::cout << "Assignation operator called" << std::endl;
	return *this;
}

