/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   B.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 17:16:43 by alienard          #+#    #+#             */
/*   Updated: 2021/03/02 20:24:47 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include "Base.hpp"

#ifdef DEBUG
# define PRINT 1
#else
# define PRINT 0
#endif

class B : public Base
{
		private:

		public:
			B();
			B(const B&);
			~B();
			B&	operator=(const B&);
};
