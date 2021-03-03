/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 10:05:16 by alienard          #+#    #+#             */
/*   Updated: 2021/03/03 11:29:29 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T>
void ft_replace_by_0(T & i){
	i = 48;
}

template <typename T>
void ft_print(T & i){
	std::cout << i << std::endl;
}


int main( void ) {

	char	tmp[10] = "SalutTest";
	int		tmpi[10];
	int		len = strlen(tmp);

	std::cout << "Test 1" << std::endl;
	::iter(tmp, len, ft_print);
	std::cout << std::endl;

	std::cout << "Test 2" << std::endl;
	::iter(tmp, len, ft_replace_by_0);
	::iter(tmp, len, ft_print);
	std::cout << std::endl;

	std::cout << "Test 3" << std::endl;
	::iter(tmp, 12, ft_print);
	std::cout << std::endl;

	std::cout << "Test 4" << std::endl;
	::iter(tmp, 0, ft_print);
	std::cout << std::endl;
	
	std::cout << "Test 5" << std::endl;
	::iter(tmp, -2, ft_print);
	std::cout << std::endl;

	srand(time(0));
	for (int i = 0 ; i < 10 ; i++){
		tmpi[i] = rand();
	}
	std::cout << "Test 6" << std::endl;
	::iter(tmpi, len, ft_print);
	return 0;
}