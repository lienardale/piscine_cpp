/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 12:02:56 by alienard          #+#    #+#             */
/*   Updated: 2021/02/26 10:53:50 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void){
	Bureaucrat *tmp = NULL;
	Bureaucrat *tmp0 = NULL;
	Bureaucrat *tmp1 = NULL;
	Form *f = NULL;
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
	
	try{
		tmp0 = new Bureaucrat( "Jean-Random", 105);
		f = new Form();
		std::cout << *tmp0 << *f;
		tmp0->signForm(*f);
		tmp1 = new Bureaucrat( "Jean-Bogoss", 10);
		std::cout << *tmp1;
		tmp1->signForm(*f);
	}
	catch (std::exception & e){
		std::cerr << "Exception : " << e.what() << std::endl;
	}

	try{
		tmp1 = new Bureaucrat( "Jean-Bogoss", 10);
		std::cout << *tmp1;
		tmp1->signForm(*f);
		std::cout << *f;
	}
	catch (std::exception & e){
		std::cerr << "Exception : " << e.what() << std::endl;
	}

	return 0;
}