/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Human.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 16:16:40 by alienard          #+#    #+#             */
/*   Updated: 2021/02/25 13:26:26 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Brain&	Human::getBrain(void)
{
	// returning reference to current human's brainso we have the right address
	Brain& _B_ref = this->_B;
	return (_B_ref);
}

std::string	Human::identify(){
	return (_B.identify());
};

Human::Human()
{
	Brain	_B;

	(void)_B;
}

Human::~Human()
{
}