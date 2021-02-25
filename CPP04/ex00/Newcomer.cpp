/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Newcomer.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 16:41:54 by alienard          #+#    #+#             */
/*   Updated: 2021/02/25 10:15:00 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Newcomer.hpp"

Newcomer::Newcomer(): Victim("Unknown")
{
	if (PRINT)
		std::cout << "Constructor called" << std::endl;

}

Newcomer::Newcomer(std::string name) : Victim(name)
{
	if (PRINT)
		std::cout << "Hi, I'm a newcomer." << std::endl;

}

Newcomer::~Newcomer()
{
	if (PRINT)
		std::cout << "Newcomer...OUT!" << std::endl;

}

Newcomer::Newcomer(const Newcomer& obj) : Victim(obj._name)
{
	*this = obj;
	if (PRINT)
		std::cout << "Hi, I'm a newcomer." << std::endl;
}

Newcomer&	Newcomer::operator=(const Newcomer& obj)
{
	Victim::operator=(obj);
	if (PRINT)
		std::cout << "Hi, I'm a newcomer." << std::endl;
	return *this;
}

void Newcomer::getPolymorphed() const{
	std::cout << this->_name << " has been turned into a blue dragon!" << std::endl;
}