/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:14:13 by alienard          #+#    #+#             */
/*   Updated: 2021/02/16 12:14:13 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap()
{
	if (PRINT)
		std::cout << "Constructor called" << std::endl;

}

NinjaTrap::~NinjaTrap()
{
	if (PRINT)
		std::cout << "Destructor called" << std::endl;

}

NinjaTrap::NinjaTrap(const NinjaTrap& obj)
{
	if (PRINT)
		std::cout << "Copy Constructor called" << std::endl;
	*this = obj;
}

NinjaTrap&	NinjaTrap::operator=(const NinjaTrap& obj)
{
	if (PRINT)
		std::cout << "Assignation operator called" << std::endl;
	return *this;
}

