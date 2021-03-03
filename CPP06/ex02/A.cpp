/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 17:16:42 by alienard          #+#    #+#             */
/*   Updated: 2021/03/02 20:49:13 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"

A::A()
{
	if (PRINT)
		std::cout << "Constructor called" << std::endl;

}

A::~A()
{
	if (PRINT)
		std::cout << "Destructor called" << std::endl;

}

A::A(const A& obj)
{
	if (PRINT)
		std::cout << "Copy Constructor called" << std::endl;
	*this = obj;
	(void) obj;
}

A&	A::operator=(const A& obj)
{
	if (PRINT)
		std::cout << "Assignation operator called" << std::endl;
	(void) obj;
	return *this;
}

