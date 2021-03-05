/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 21:13:49 by alienard          #+#    #+#             */
/*   Updated: 2021/03/04 14:32:18 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	sp.print_stored();
	try{
		sp.addNumber(11);
	}
	catch(const std::exception& e){
		std::cerr << "Exception : " << e.what() << std::endl;
	}
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	Span sp1 = Span(10000);
	try{
		sp1.addNumbers(5000,6000);
		sp1.addNumbers(0,1000);
		sp1.addNumbers(10000,11000);
		sp1.addNumbers(55000,56000);
		sp1.addNumbers(-2000, -1000);
		std::cout << "Span size = " << sp1.getSize() << std::endl;
		sp1.addNumbers(2147483647 - 5000,2147483647);
		std::cout << "Span size = " << sp1.getSize() << std::endl;
		std::cout << sp1.shortestSpan() << std::endl;
		std::cout <<"should be : 2147483647 - -2000 :" << 2147485646 <<std::endl;
		std::cout <<"                                "<< sp1.longestSpan() << std::endl;
	}
	catch(const std::exception& e){
		std::cerr << "Exception : " << e.what() << std::endl;
	}

	Span sp2 = Span(10000);
	try{
		sp2.addNumbers(-6000,-5000);
		sp2.addNumbers(-2000,-1000);
		sp2.addNumbers(-11000,-10000);
		sp2.addNumbers(-56000,-55000);
		sp2.addNumbers(-4000, -3000);
		std::cout << "Span size = " << sp2.getSize() << std::endl;
		sp2.addNumbers(-2147483648,-2147483648 + 5000);
		std::cout << "Span size = " << sp2.getSize() << std::endl;
		std::cout << sp2.shortestSpan() << std::endl;
		std::cout <<"should be : -1000 - -2147483648 :" << 2147482647 <<std::endl;
		std::cout <<"                                 "<< sp2.longestSpan() << std::endl;
	}
	catch(const std::exception& e){
		std::cerr << "Exception : " << e.what() << std::endl;
	}

	Span sp3 = Span(100001);
	try{
		sp3.addNumbers(0,100001);

		std::cout << "Span size = " << sp3.getSize() - 1 << std::endl;
		std::cout << sp3.shortestSpan() << std::endl;
		std::cout <<"should be : 100000 - 0 :" << 100000 <<std::endl;
		std::cout <<"                        "<< sp3.longestSpan() << std::endl;
	}
	catch(const std::exception& e){
		std::cerr << "Exception : " << e.what() << std::endl;
	}

	return 0;
}
