/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 16:16:29 by alienard          #+#    #+#             */
/*   Updated: 2021/02/12 17:15:26 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

std::string	Brain::identify(void) const
{
	std::stringstream	string_stream;

	// putting the current instance into stringstream
	string_stream << this;
	// returning it into string format
	return (string_stream.str());
}

Brain::Brain()
{
}

Brain::~Brain()
{
}