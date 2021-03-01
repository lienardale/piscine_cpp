/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:38:28 by alienard          #+#    #+#             */
/*   Updated: 2021/02/26 12:02:53 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : _name("Bob"), _grade(75)
{
	if (PRINT)
		std::cout << "Constructor called" << std::endl;

}

Bureaucrat::Bureaucrat(std::string const & name, int grade) : _name(name), _grade(grade)
{
	if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::~Bureaucrat()
{
	if (PRINT)
		std::cout << "Destructor called" << std::endl;

}

Bureaucrat::Bureaucrat(const Bureaucrat& obj)
{
	if (PRINT)
		std::cout << "Copy Constructor called" << std::endl;
	*this = obj;
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& obj)
{
	if (PRINT)
		std::cout << "Assignation operator called" << std::endl;
	this->_grade = obj._grade;
	return *this;
}

std::string const	Bureaucrat::getName(void) const{
	return this->_name;
}

int		Bureaucrat::getGrade(void) const{
	return this->_grade;
}

void	Bureaucrat::incGrade(){
	if (this->_grade <= 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade -= 1;
}

void	Bureaucrat::decGrade(){
	if (this->_grade >= 150)
		throw Bureaucrat::GradeTooLowException();
	this->_grade += 1;
}

void	Bureaucrat::signForm(Form& form){
	form.beSigned(*this);
}

std::ostream &	operator<<(std::ostream& os, const Bureaucrat& src){
	os << "Hi, welcome, I'm " << src.getName() << ", Bureaucrat of grade " << src.getGrade() << ". How can I help you ?" << std::endl;
	return (os);
}
