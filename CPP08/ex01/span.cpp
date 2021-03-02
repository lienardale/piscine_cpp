/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 21:13:21 by alienard          #+#    #+#             */
/*   Updated: 2021/03/02 21:13:21 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

span::span()
{
	if (PRINT)
		std::cout << "Constructor called" << std::endl;

}

span::~span()
{
	if (PRINT)
		std::cout << "Destructor called" << std::endl;

}

span::span(const span& obj)
{
	if (PRINT)
		std::cout << "Copy Constructor called" << std::endl;
	*this = obj;
}

span&	span::operator=(const span& obj)
{
	if (PRINT)
		std::cout << "Assignation operator called" << std::endl;
	return *this;
}

