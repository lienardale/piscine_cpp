/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SuperTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:14:28 by alienard          #+#    #+#             */
/*   Updated: 2021/02/16 12:14:28 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"

SuperTrap::SuperTrap()
{
	if (PRINT)
		std::cout << "Constructor called" << std::endl;

}

SuperTrap::~SuperTrap()
{
	if (PRINT)
		std::cout << "Destructor called" << std::endl;

}

SuperTrap::SuperTrap(const SuperTrap& obj)
{
	if (PRINT)
		std::cout << "Copy Constructor called" << std::endl;
	*this = obj;
}

SuperTrap&	SuperTrap::operator=(const SuperTrap& obj)
{
	if (PRINT)
		std::cout << "Assignation operator called" << std::endl;
	return *this;
}

