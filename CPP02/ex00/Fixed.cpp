/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 16:46:50 by alienard          #+#    #+#             */
/*   Updated: 2021/02/15 16:46:50 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	if (PRINT)
		std::cout << "Constructor called" << std::endl;

}

Fixed::~Fixed()
{
	if (PRINT)
		std::cout << "Destructor called" << std::endl;

}

Fixed::Fixed(const Fixed& obj)
{
	if (PRINT)
		std::cout << "Copy Constructor called" << std::endl;
	*this = obj;
}

Fixed&	Fixed::operator=(const Fixed& obj)
{
	if (PRINT)
		std::cout << "Assignation operator called" << std::endl;
	return *this;
}

