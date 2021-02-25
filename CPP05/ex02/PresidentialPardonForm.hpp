/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:39:31 by alienard          #+#    #+#             */
/*   Updated: 2021/02/25 11:39:31 by alienard         ###   ########.fr       */
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

class PresidentialPardonForm
{
		private:

		public:
			PresidentialPardonForm();
			PresidentialPardonForm(const PresidentialPardonForm&);
			~PresidentialPardonForm();
			PresidentialPardonForm&	operator=(const PresidentialPardonForm&);
};
