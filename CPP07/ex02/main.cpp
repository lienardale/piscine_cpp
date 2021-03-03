/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 13:36:43 by alienard          #+#    #+#             */
/*   Updated: 2021/03/03 14:55:12 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int	main(void)
{
	Array<int>	a1;
	Array<int>	a2(10);
	Array<int>	a3(2000);
	Array<int>	a4(-2);

	srand(time(0));

	std::cout << "Array<int> () Test" << std::endl;
	try{
		for(int i = 0 ; i < 10 ; i++){
			// a1[i] = rand();
			std::cout << a1[i] << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception :" << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Array<int> (10) Test" << std::endl;
	try{
		for(int i = 0 ; i < 10 ; i++){
			a2[i] = rand();
			std::cout << "a2[" << i << "]:"<< a2[i] << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception :" << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Array<int> (2000) Test" << std::endl;
	try{
		for(int i = 0 ; i < 2000 ; i++){
			a3[i] = rand();
		}
		std::cout << "a3[" << 1999 << "]:"<< a3[1999] << std::endl;
		std::cout << "a3[" << 2000 << "]:"<< a3[2000] << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception :" << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Array<char> Test" << std::endl;
	Array<char>	b1(10);
	std::string		alphanum = "qwertyuiopasdfghjklzxcvbnmQWERTYUIOPASDFGHJKLZXCVBNM0123456789";
	try{
		for(int i = 0 ; i < 10 ; i++){
			b1[i] = alphanum[rand() % alphanum.length()];
			std::cout << b1[i] << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception :" << e.what() << std::endl;
	}
	std::cout << std::endl;

	std::cout << "Array< Array<int> > Test" << std::endl;
	Array< Array<int> > c1(20);
	try{
		for(int i = 0 ; i < 10 ; i++){
			c1[i][0] = rand();
			std::cout << "c2[" << i << "]:" << c1[i][0] << std::endl;
		}
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception :" << e.what() << std::endl;
	}
	std::cout << std::endl;

	return 0;
}