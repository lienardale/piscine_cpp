/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:38:27 by alienard          #+#    #+#             */
/*   Updated: 2021/02/26 09:14:17 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <stdexcept>

#ifdef DEBUG
# define PRINT 1
#else
# define PRINT 0
#endif

class Bureaucrat
{
		private:
			std::string const	_name;
			int					_grade;
		public:
			Bureaucrat();
			Bureaucrat(std::string const & name, int grade);
			Bureaucrat(const Bureaucrat&);
			~Bureaucrat();
			Bureaucrat&	operator=(const Bureaucrat&);
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
			std::string const	getName(void) const;
			int					getGrade(void) const;
			void				incGrade();
			void				decGrade();
};

std::ostream &	operator<<(std::ostream& os, const Bureaucrat& src);