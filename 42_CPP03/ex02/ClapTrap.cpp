/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:13:57 by alienard          #+#    #+#             */
/*   Updated: 2021/02/16 12:13:57 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	if (PRINT)
		std::cout << "Constructor called" << std::endl;

}

ClapTrap::~ClapTrap()
{
	if (PRINT)
		std::cout << "Destructor called" << std::endl;

}

ClapTrap::ClapTrap(const ClapTrap& obj)
{
	if (PRINT)
		std::cout << "Copy Constructor called" << std::endl;
	*this = obj;
}

ClapTrap&	ClapTrap::operator=(const ClapTrap& obj)
{
	if (PRINT)
		std::cout << "Assignation operator called" << std::endl;
	return *this;
}

