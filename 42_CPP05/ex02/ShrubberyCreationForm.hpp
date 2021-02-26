/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:39:30 by alienard          #+#    #+#             */
/*   Updated: 2021/02/26 12:17:01 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "Form.hpp"

#ifdef DEBUG
# define PRINT 1
#else
# define PRINT 0
#endif

class ShrubberyCreationForm : public Form
{
		private:
			// const std::string	_name;
			// bool				_signed;
			// const int			_signGrade;
			// const int			_execGrade;
		public:
			ShrubberyCreationForm();
			ShrubberyCreationForm(std::string, int, int);
			ShrubberyCreationForm(const ShrubberyCreationForm&);
			virtual ~ShrubberyCreationForm();
			ShrubberyCreationForm&	operator=(const ShrubberyCreationForm&);
			void		real_exec(Bureaucrat const & executor) const;
};
