/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:39:43 by alienard          #+#    #+#             */
/*   Updated: 2021/03/01 10:20:11 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
	if (PRINT)
		std::cout << "Constructor called" << std::endl;

}

Intern::~Intern()
{
	if (PRINT)
		std::cout << "Destructor called" << std::endl;

}

Intern::Intern(const Intern& obj)
{
	if (PRINT)
		std::cout << "Copy Constructor called" << std::endl;
	*this = obj;
}

Intern&	Intern::operator=(const Intern& obj)
{
	(void)obj;
	if (PRINT)
		std::cout << "Assignation operator called" << std::endl;
	return *this;
}

Form*	Intern::makeShrubberyCreationForm(const std::string & target){
	return (new ShrubberyCreationForm(target));
}

Form*	Intern::makeRobotomyRequestForm(const std::string & target){
	return (new RobotomyRequestForm(target));
}

Form*	Intern::makePresidentialPardonForm(const std::string &target){
	return (new PresidentialPardonForm(target));
}

Form*	Intern::makeForm(std::string type, std::string target){
	Form *tmp = NULL;
	std::string	forms [3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
	this->formMaker[0] = &Intern::makeShrubberyCreationForm;
	this->formMaker[1] = &Intern::makeRobotomyRequestForm;
	this->formMaker[2] =  &Intern::makePresidentialPardonForm;
	for(int i = 0 ; i < 3 ; i++){
		if (type == forms[i]){
			std::cout << "Intern creates " << type << "." << std::endl;
			return ((this->*formMaker[i])(target));
		}
	}
	throw Intern::InvalidFormException();
	return tmp;
}