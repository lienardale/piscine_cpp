/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:39:30 by alienard          #+#    #+#             */
/*   Updated: 2021/02/26 12:17:02 by alienard         ###   ########.fr       */
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

class RobotomyRequestForm : public Form
{
		private:
			// const std::string	_name;
			// bool				_signed;
			// const int			_signGrade;
			// const int			_execGrade;
		public:
			RobotomyRequestForm();
			RobotomyRequestForm(std::string, int, int);
			RobotomyRequestForm(const RobotomyRequestForm&);
			virtual ~RobotomyRequestForm();
			RobotomyRequestForm&	operator=(const RobotomyRequestForm&);
			void		real_exec(Bureaucrat const & executor) const;
};
