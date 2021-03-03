/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 15:38:11 by alienard          #+#    #+#             */
/*   Updated: 2021/03/02 16:44:33 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

int main(int argc, char const *argv[])
{

	if (argc != 2) {
		std::cerr << "Invalid arg nb, usage './convert <arg>'" << std::endl;
		return 1;
	}
	convert convert(argv[1]);
	try
	{
		convert.get_type();
	}
	catch(const std::exception& e)
	{
		std::cerr << "Exception : " << e.what() << std::endl;
		return 1;
	}
	convert.print_casts();
	return 0;
}