/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 17:06:04 by alienard          #+#    #+#             */
/*   Updated: 2021/03/02 20:19:50 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Data.hpp"

int	main(void){

		void *serialized = serialize();
		char *serial_data = reinterpret_cast<char*>(serialized);
		
		std::cout << "This is the serialized data:" << serial_data << std::endl;
		
		Data * data = deserialize(serialized);
		std::cout << *data;
		
		delete[] reinterpret_cast<char *>(serialized);
		delete data;
}
