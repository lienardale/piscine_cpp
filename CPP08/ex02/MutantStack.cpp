/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 21:14:40 by alienard          #+#    #+#             */
/*   Updated: 2021/03/02 21:14:40 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

MutantStack::MutantStack()
{
	if (PRINT)
		std::cout << "Constructor called" << std::endl;

}

MutantStack::~MutantStack()
{
	if (PRINT)
		std::cout << "Destructor called" << std::endl;

}

MutantStack::MutantStack(const MutantStack& obj)
{
	if (PRINT)
		std::cout << "Copy Constructor called" << std::endl;
	*this = obj;
}

MutantStack&	MutantStack::operator=(const MutantStack& obj)
{
	if (PRINT)
		std::cout << "Assignation operator called" << std::endl;
	return *this;
}

