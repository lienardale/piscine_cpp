/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 17:16:07 by alienard          #+#    #+#             */
/*   Updated: 2021/03/02 20:48:58 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

Base::Base()
{
	if (PRINT)
		std::cout << "Constructor called" << std::endl;

}

Base::~Base()
{
	if (PRINT)
		std::cout << "Destructor called" << std::endl;

}

Base::Base(const Base& obj)
{
	if (PRINT)
		std::cout << "Copy Constructor called" << std::endl;
	*this = obj;
	(void) obj;
}

Base&	Base::operator=(const Base& obj)
{
	if (PRINT)
		std::cout << "Assignation operator called" << std::endl;
	(void) obj;
	return *this;
}

