/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 12:02:56 by alienard          #+#    #+#             */
/*   Updated: 2021/03/01 11:16:15 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

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
		f = new RobotomyRequestForm();
		std::cout << *tmp0 << *f;
		tmp0->signForm(*f);
		tmp1 = new Bureaucrat( "Jean-Bogoss", 10);
		std::cout << *tmp1;
		tmp1->signForm(*f);
	}
	catch (std::exception & e){
		std::cerr << "Exception : " << e.what() << std::endl;
	}
	delete tmp0;


	try{
		tmp1 = new Bureaucrat( "Jean-Bogoss", 10);
		std::cout << *tmp1;
		tmp1->signForm(*f);
		std::cout << *f;
	}
	catch (std::exception & e){
		std::cerr << "Exception : " << e.what() << std::endl;
	}

	ShrubberyCreationForm *Sform = new ShrubberyCreationForm();
	PresidentialPardonForm *Pform = new PresidentialPardonForm();
	RobotomyRequestForm *Rform = new RobotomyRequestForm();

	try{
		std::cout << *Sform;
		tmp1->signForm(*Sform);
		std::cout << *Sform;
		std::cerr << std::endl;

		std::cout << *Pform;
		tmp1->signForm(*Pform);
		std::cout << *Pform;
		std::cerr << std::endl;

		std::cout << *Rform;
		tmp1->signForm(*Rform);
		std::cout << *Rform;
		std::cerr << std::endl;

		std::cout << *Sform;
		tmp1->executeForm(*Sform);
		std::cout << *Sform;
		std::cerr << std::endl;

		std::cout << *Pform;
		tmp1->executeForm(*Pform);
		std::cout << *Pform;
		std::cerr << std::endl;

		std::cout << *Rform;
		tmp1->executeForm(*Rform);
		std::cout << *Rform;
		std::cerr << std::endl;

		tmp = new Bureaucrat( "Jean-CassCouil", 2);
		std::cout << *Pform;
		tmp->executeForm(*Pform);
		std::cout << *Pform;
		std::cerr << std::endl;
	}
	catch (std::exception & e){
		std::cerr << "Exception : " << e.what() << std::endl;
	}

	try{
		Intern	*intern = new Intern();
		Form	*test_form = NULL;
		test_form = intern->makeForm("robotomy request", "Bender");
		std::cout << *test_form;
		tmp->signForm(*test_form);
		tmp->executeForm(*test_form);
		test_form = intern->makeForm("shrubbery creation", "San Francisco");
		std::cout << *test_form;
		tmp->signForm(*test_form);
		tmp->executeForm(*test_form);
		test_form = intern->makeForm("presidential pardon", "Dora the explorer");
		std::cout << *test_form;
		tmp->signForm(*test_form);
		tmp->executeForm(*test_form);
		test_form = intern->makeForm("destitution", "Vladimir Poutine");
		std::cout << *test_form;
		tmp->signForm(*test_form);
		tmp->executeForm(*test_form);
	}
	catch (std::exception & e){
		std::cerr << "Exception : " << e.what() << std::endl;
	}

	delete f;
	delete tmp;
	delete tmp1;
	delete Sform;
	delete Pform;
	delete Rform;
	return 0;
}