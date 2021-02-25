/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:39:30 by alienard          #+#    #+#             */
/*   Updated: 2021/02/25 11:39:30 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

#ifdef DEBUG
# define PRINT 1
#else
# define PRINT 0
#endif

class RobotomyRequestForm
{
		private:

		public:
			RobotomyRequestForm();
			RobotomyRequestForm(const RobotomyRequestForm&);
			~RobotomyRequestForm();
			RobotomyRequestForm&	operator=(const RobotomyRequestForm&);
};
