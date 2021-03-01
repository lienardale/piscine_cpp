/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:39:31 by alienard          #+#    #+#             */
/*   Updated: 2021/03/01 17:22:01 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5, "Xavier Dupont de Ligonès")
{
	if (PRINT)
		std::cout << "Constructor called" << std::endl;

}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : Form("PresidentialPardonForm", 25, 5, target)
{
	if (PRINT)
		std::cout << "Constructor called" << std::endl;

}

PresidentialPardonForm::~PresidentialPardonForm()
{
	if (PRINT)
		std::cout << "Destructor called" << std::endl;

}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) : Form(obj.getName(), obj.getsignGrade(), obj.getexecGrade(), obj.getTarget())
{
	if (PRINT)
		std::cout << "Copy Constructor called" << std::endl;
	// *this = obj;
}

PresidentialPardonForm&	PresidentialPardonForm::operator=(const PresidentialPardonForm& obj)
{
	Form::operator=(obj);
	if (PRINT)
		std::cout << "Assignation operator called" << std::endl;
	return *this;
}

void		PresidentialPardonForm::real_exec(Bureaucrat const & executor) const{
	(void)executor;
	std::cout << this->getTarget() << " was pardonned by Zafod Beeblebrox." << std::endl;
}
