/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:39:30 by alienard          #+#    #+#             */
/*   Updated: 2021/03/01 11:21:42 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : Form("RobotomyRequestForm", 72, 45, "Bob")
{
	if (PRINT)
		std::cout << "Constructor called" << std::endl;

}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : Form("RobotomyRequestForm", 72, 45, target)
{
	if (PRINT)
		std::cout << "Constructor called" << std::endl;

}

RobotomyRequestForm::~RobotomyRequestForm()
{
	if (PRINT)
		std::cout << "Destructor called" << std::endl;

}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj) : Form(obj.getName(), obj.getsignGrade(), obj.getexecGrade(), obj.getTarget())
{
	if (PRINT)
		std::cout << "Copy Constructor called" << std::endl;
	// *this = obj;
}

RobotomyRequestForm&	RobotomyRequestForm::operator=(const RobotomyRequestForm& obj)
{
	Form::operator=(obj);
	if (PRINT)
		std::cout << "Assignation operator called" << std::endl;
	return *this;
}

void		RobotomyRequestForm::real_exec(Bureaucrat const & executor) const{
	std::cout << "* VWIIIIIIIIIZZZZZZZRKROUIKKLONG *" << std::endl << this->getTarget() << " was Robotomyzed by " << executor.getName() << std::endl;
}