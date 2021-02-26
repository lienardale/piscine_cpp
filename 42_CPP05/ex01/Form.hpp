/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:38:54 by alienard          #+#    #+#             */
/*   Updated: 2021/02/26 11:30:14 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "Bureaucrat.hpp"

#ifdef DEBUG
# define PRINT 1
#else
# define PRINT 0
#endif

class Bureaucrat;

class Form
{
		private:
			const std::string	_name;
			bool				_signed;
			const int			_signGrade;
			const int			_execGrade;
		public:
			Form();
			Form(std::string, int, int);
			Form(const Form&);
			virtual ~Form();
			Form&	operator=(const Form&);
					class GradeTooHighException : public std::exception
			{
				public:
					virtual const char* what() const throw(){
						return ("Grade is too high.");
					}
			};
			class GradeTooLowException : public std::exception
			{
				public:
					virtual const char* what() const throw(){
						return ("Grade is too low.");
					}
			};
			class FormAlreadySigned : public std::exception{
				public:
					virtual const char* what() const throw(){
						return "Form already signed.";
					}
			};
			class NoBureaucrat : public std::exception{
				public:
					virtual const char* what() const throw(){
						return "No bureaucrat selected.";
					}
			};
			std::string const	getName(void) const;
			bool				getStatus(void) const;
			int					getsignGrade(void) const;
			int					getexecGrade(void) const;
			void				beSigned(Bureaucrat&);
};

std::ostream &	operator<<(std::ostream& os, const Form& src);