/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   A.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 17:16:42 by alienard          #+#    #+#             */
/*   Updated: 2021/03/02 20:24:22 by alienard         ###   ########.fr       */
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

class A : public Base
{
		private:

		public:
			A();
			A(const A&);
			virtual ~A();
			A&	operator=(const A&);
};
