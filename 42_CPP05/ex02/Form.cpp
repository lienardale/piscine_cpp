/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:38:54 by alienard          #+#    #+#             */
/*   Updated: 2021/02/26 12:15:41 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Defaut Form"), _signed(false), _signGrade(100), _execGrade(75)
{
	if (PRINT)
		std::cout << "Constructor called" << std::endl;

}

Form::Form(std::string name, int sign, int exec) : _name(name), _signed(false), _signGrade(sign), _execGrade(exec){
	if (sign < 1 || exec < 1)
		throw Form::GradeTooHighException();
	if (sign > 150 || exec > 150)
		throw Form::GradeTooLowException();
}

Form::~Form()
{
	if (PRINT)
		std::cout << "Destructor called" << std::endl;

}

Form::Form(const Form& obj) : _name(obj._name), _signed(obj._signed), _signGrade(obj._signGrade), _execGrade(obj._execGrade)
{
	if (PRINT)
		std::cout << "Copy Constructor called" << std::endl;
	// *this = obj;
}

Form&	Form::operator=(const Form& obj)
{
	if (PRINT)
		std::cout << "Assignation operator called" << std::endl;
	this->_signed = obj._signed;
	return *this;
}

std::string const	Form::getName(void) const{
	return this->_name;
}

bool	Form::getStatus(void) const{
	return this->_signed;
}

int		Form::getsignGrade(void) const{
	return this->_signGrade;
}

int		Form::getexecGrade(void) const{
	return this->_execGrade;
}

void	Form::beSigned(Bureaucrat& bob){
	if (bob.getGrade() > this->_signGrade)
		throw Form::GradeTooLowException();
	else
		this->_signed = true;
}

void		Form::execute(Bureaucrat const & executor) const{
	if (this->getStatus() == false)
		throw Form::FormNotSignedException();
	else if (executor.getGrade() > this->_execGrade)
		throw Form::GradeTooLowException();
	else
		this->real_exec(executor);
}

void		Form::real_exec(Bureaucrat const & executor) const{
		
		std::cout << "Who cares." << std::endl;
}

std::ostream &	operator<<(std::ostream& os, const Form& src){
	os << "This is Form " << src.getName() << ", it is " << (src.getStatus() ? "signed" : "not signed") << ". It has a signing grade of " << src.getsignGrade() << ". And an execution grade of " << src.getexecGrade() << std::endl;
	return (os);
}
