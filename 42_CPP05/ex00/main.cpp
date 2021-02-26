/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 12:02:56 by alienard          #+#    #+#             */
/*   Updated: 2021/02/26 09:37:56 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void){
	Bureaucrat *tmp = NULL;
	try
	{
		tmp = new Bureaucrat;
	/* do some stuff with bureaucrats */
		std::cout << *tmp;
		while (tmp->getGrade() < 150)
		{
			tmp->decGrade();
		}
		std::cout << *tmp;
		while (tmp->getGrade() > 1)
		{
			tmp->incGrade();
		}
		std::cout << *tmp;
		tmp->incGrade();
		std::cout << *tmp;
	}
	catch (std::exception & e)
	{
	/* handle exception */
		std::cerr << "Exception : " << e.what() << std::endl;
	}
	delete tmp;

	try
	{
		tmp = new Bureaucrat( "Manu Micron", 1);
	/* do some stuff with bureaucrats */
		std::cout << *tmp;
		while (tmp->getGrade() < 150)
		{
			tmp->decGrade();
		}
		std::cout << *tmp;
		while (tmp->getGrade() > 1)
		{
			tmp->incGrade();
		}
		std::cout << *tmp;
		tmp->incGrade();
		std::cout << *tmp;
	}
	catch (std::exception & e)
	{
	/* handle exception */
		std::cerr << "Exception : " << e.what() << std::endl;
	}
	delete tmp;

		try
	{
		tmp = new Bureaucrat( "Jean-CassCouil", 2);
	/* do some stuff with bureaucrats */
		std::cout << *tmp;
		while (tmp->getGrade() > 1)
		{
			tmp->incGrade();
		}
		std::cout << *tmp;
		while (tmp->getGrade() < 150)
		{
			tmp->decGrade();
		}
		std::cout << *tmp;
		tmp->decGrade();
		std::cout << *tmp;
	}
	catch (std::exception & e)
	{
	/* handle exception */
		std::cerr << "Exception : " << e.what() << std::endl;
	}
	delete tmp;
	
	return 0;
}