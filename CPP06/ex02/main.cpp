/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 20:40:50 by alienard          #+#    #+#             */
/*   Updated: 2021/03/02 21:05:20 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

void identify_from_pointer(Base * p){
	A * a = dynamic_cast<A*>(p);
	B * b = dynamic_cast<B*>(p);
	C * c = dynamic_cast<C*>(p);
	Base * base = dynamic_cast<Base*>(p);

	if (a!=0)
		std::cout << "A";
	else if (b!=0)
		std::cout << "B";
	else if (c!=0)
		std::cout << "C";
	else if (base!=0)
		std::cout << "Base";
	else
		std::cout << "Invalid type";
	std::cout << std::endl;
}

void identify_from_reference( Base & p ){
	try
	{
		A & a = dynamic_cast<A&>(p);
		(void)a;
		std::cout << "A";
	}
	catch(const std::exception& e)
	{
		try
		{
			B & b = dynamic_cast<B&>(p);
			(void)b;
			std::cout << "B";
		}
		catch(const std::exception& e)
		{
			try
			{
				C & c = dynamic_cast<C&>(p);
				(void)c;
				std::cout << "C";
			}
			catch(const std::exception& e)
			{
				try
				{
					Base & base = dynamic_cast<Base&>(p);
					(void)base;
					std::cout << "Base";
				}
				catch(const std::exception& e)
				{
					std::cerr << "Invalid type";
				}
			}
			
		}
		
	}
	std::cout << std::endl;
}

int	main(){
	Base tmp0;
	A tmpA;
	B tmpB;
	C tmpC;

	Base &tmp0_ref = tmp0;
	A &tmpA_ref = tmpA;
	B &tmpB_ref = tmpB;
	C &tmpC_ref = tmpC;	
	
	std::cout << "Shoud be | Is" << std::endl;
	std::cout << "Base     | ";
	identify_from_pointer(&tmp0);
	std::cout << "   A     | ";
	identify_from_pointer(&tmpA);
	std::cout << "   B     | ";
	identify_from_pointer(&tmpB);
	std::cout << "   C     | ";
	identify_from_pointer(&tmpC);

	std::cout << "Base     | ";
	identify_from_reference(tmp0_ref);
	std::cout << "   A     | ";
	identify_from_reference(tmpA_ref);
	std::cout << "   B     | ";
	identify_from_reference(tmpB_ref);
	std::cout << "   C     | ";
	identify_from_reference(tmpC_ref);
	return 0;
}
