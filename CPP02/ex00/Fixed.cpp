/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 16:46:50 by alienard          #+#    #+#             */
/*   Updated: 2021/02/16 10:00:50 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
{
	if (PRINT)
		std::cout << "Default constructor called" << std::endl;
	this->_value = 0;
}

Fixed::~Fixed()
{
	if (PRINT)
		std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed& obj)
{
	if (PRINT)
		std::cout << "Copy constructor called" << std::endl;
	*this = obj;
}

Fixed&	Fixed::operator=(const Fixed& obj)
{
	if (PRINT)
		std::cout << "Assignation operator called" << std::endl;
	this->_value = obj.getRawBits();
	return *this;
}

int		Fixed::getRawBits( void ) const{
	if (PRINT)
		std::cout << "getRawBits member function called" << std::endl;
	return this->_value;
}

void	Fixed::setRawBits( int const raw ){
	if (PRINT)
		std::cout << "setRawBits member function called" << std::endl;
	this->_value = raw;
}
