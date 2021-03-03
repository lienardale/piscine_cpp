/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.cpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 17:16:43 by alienard          #+#    #+#             */
/*   Updated: 2021/03/02 20:49:24 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "B.hpp"

B::B()
{
	if (PRINT)
		std::cout << "Constructor called" << std::endl;

}

B::~B()
{
	if (PRINT)
		std::cout << "Destructor called" << std::endl;

}

B::B(const B& obj)
{
	if (PRINT)
		std::cout << "Copy Constructor called" << std::endl;
	*this = obj;
	(void) obj;
}

B&	B::operator=(const B& obj)
{
	if (PRINT)
		std::cout << "Assignation operator called" << std::endl;
	(void) obj;
	return *this;
}

