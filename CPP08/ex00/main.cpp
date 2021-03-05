/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 16:29:43 by alienard          #+#    #+#             */
/*   Updated: 2021/03/04 10:06:16 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <list>

int	main(void){
	std::list<int> lst1;

	lst1.push_back(42);
	lst1.push_back(21);
	lst1.push_back(10);
	lst1.push_back(5);

	int	i;
	try{

		i = ::easyfind(lst1, 42);
		std::cout << "value asked for : 42 | value found : " << i << std::endl;
		i = ::easyfind(lst1, 21);
		std::cout << "value asked for : 42 | value found : " << i << std::endl;
		i = ::easyfind(lst1, 10);
		std::cout << "value asked for : 42 | value found : " << i << std::endl;
		i = ::easyfind(lst1, 5);
		std::cout << "value asked for : 42 | value found : " << i << std::endl;
		i = ::easyfind(lst1, 12);
		std::cout << "value asked for : 42 | value found : " << i << std::endl;
	}
	catch(const std::exception& e){
		std::cerr <<"value asked for : " << i << ", triggered exception." << e.what() << std::endl;
	}

	return 0;
}