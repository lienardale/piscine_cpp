/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:38:54 by alienard          #+#    #+#             */
/*   Updated: 2021/02/25 11:38:54 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
{
	if (PRINT)
		std::cout << "Constructor called" << std::endl;

}

Form::~Form()
{
	if (PRINT)
		std::cout << "Destructor called" << std::endl;

}

Form::Form(const Form& obj)
{
	if (PRINT)
		std::cout << "Copy Constructor called" << std::endl;
	*this = obj;
}

Form&	Form::operator=(const Form& obj)
{
	if (PRINT)
		std::cout << "Assignation operator called" << std::endl;
	return *this;
}

