/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 17:16:43 by alienard          #+#    #+#             */
/*   Updated: 2021/03/02 20:49:31 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "C.hpp"

C::C()
{
	if (PRINT)
		std::cout << "Constructor called" << std::endl;

}

C::~C()
{
	if (PRINT)
		std::cout << "Destructor called" << std::endl;

}

C::C(const C& obj)
{
	if (PRINT)
		std::cout << "Copy Constructor called" << std::endl;
	*this = obj;
	(void) obj;
}

C&	C::operator=(const C& obj)
{
	if (PRINT)
		std::cout << "Assignation operator called" << std::endl;
	(void) obj;
	return *this;
}

