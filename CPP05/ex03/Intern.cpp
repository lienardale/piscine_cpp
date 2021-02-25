/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:39:43 by alienard          #+#    #+#             */
/*   Updated: 2021/02/25 11:39:43 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	if (PRINT)
		std::cout << "Constructor called" << std::endl;

}

Intern::~Intern()
{
	if (PRINT)
		std::cout << "Destructor called" << std::endl;

}

Intern::Intern(const Intern& obj)
{
	if (PRINT)
		std::cout << "Copy Constructor called" << std::endl;
	*this = obj;
}

Intern&	Intern::operator=(const Intern& obj)
{
	if (PRINT)
		std::cout << "Assignation operator called" << std::endl;
	return *this;
}

