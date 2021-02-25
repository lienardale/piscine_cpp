/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Peon.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:19:46 by alienard          #+#    #+#             */
/*   Updated: 2021/02/25 10:14:32 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"

Peon::Peon(): Victim("Unknown")
{
	if (PRINT)
		std::cout << "Zog zog." << std::endl;

}

Peon::Peon(std::string name) : Victim(name)
{
	if (PRINT)
		std::cout << "Zog zog." << std::endl;

}

Peon::~Peon()
{
	if (PRINT)
		std::cout << "Bleuark..." << std::endl;

}

Peon::Peon(const Peon& obj) : Victim(obj._name)
{
	
	*this = obj;
	if (PRINT)
		std::cout << "Zog zog." << std::endl;
}

Peon&	Peon::operator=(const Peon& obj)
{
	Victim::operator=(obj);
	if (PRINT)
		std::cout << "Zog zog." << std::endl;
	return *this;
}

void Peon::getPolymorphed() const{
	std::cout << this->_name << " has been turned into a pink pony!" << std::endl;
}
