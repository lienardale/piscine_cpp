/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Data.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 17:05:33 by alienard          #+#    #+#             */
/*   Updated: 2021/03/02 20:20:34 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

std::ostream & operator<<(std::ostream & os, Data const & data){
	os << "This is the data struc content :" << std::endl << "s1:"<< data.s1 << std::endl << "n:" << data.n << std::endl << "s2:" << data.s2 << std::endl;
	return os;
}

void *	serialize(void){
	srand(time(0));
	std::string		alphanum = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM0123456789";
	char	*serialized_data = new char[sizeof(char) * 16 + sizeof(int)];
	int		i;
	
	for (i = 0 ; i < 8 ; i++)
		serialized_data[i] = alphanum[rand() % alphanum.length()];
	for (i = 8; i < 12; i++)
		serialized_data[i] = rand() % 255;
	for (i = 12 ; i < 20; i++)
		serialized_data[i] = alphanum[rand() % alphanum.length()];
	return reinterpret_cast<void*>(serialized_data); //seul type de cast qui pernet le retypage de donnees brutes

}
Data *	deserialize(void * raw){
	Data	*data = new Data;
	char	*converted_data = static_cast<char*>(raw);
	
	data->s1.assign(converted_data, 8);
	data->n = *(reinterpret_cast<int*>(&converted_data[8]));
	data->s2.assign(converted_data + 12, 8);
	return (reinterpret_cast <Data *> (data));
}
