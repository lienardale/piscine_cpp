/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:39:42 by alienard          #+#    #+#             */
/*   Updated: 2021/03/01 10:04:25 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

#ifdef DEBUG
# define PRINT 1
#else
# define PRINT 0
#endif

class Intern
{
		private:
			Form *(Intern::*formMaker[3])(std::string const &);
			Form*	makeShrubberyCreationForm(const std::string &);
			Form*	makeRobotomyRequestForm(const std::string &);
			Form*	makePresidentialPardonForm(const std::string &);
		public:
			Intern();
			Intern(const Intern&);
			~Intern();
			Intern&	operator=(const Intern&);
			Form*	makeForm(std::string, std::string);
			class InvalidFormException : public std::exception
			{
				public:
					virtual const char* what() const throw(){
						return ("Form is invalid.");
					}
			};
};
