/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 21:10:09 by alienard          #+#    #+#             */
/*   Updated: 2021/03/03 10:02:54 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"


int main( void ) {
	int a = 2;
	int b = 3;
	int e = 3;
	::swap( a, b );
	std::cout << "a = " << a << ", b = " << b << ", e = " << e << std::endl;
	std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
	std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
	std::cout << "min( a, c ) = " << ::min( a, e ) << std::endl;
	std::cout << "max( a, c ) = " << ::max( a, e ) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	std::string f = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << ", f = " << f << std::endl;
	std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
	std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	std::cout << "min( c, f ) = " << ::min( c, f ) << std::endl;
	std::cout << "max( c, f ) = " << ::max( c, f ) << std::endl;
	return 0;
}
