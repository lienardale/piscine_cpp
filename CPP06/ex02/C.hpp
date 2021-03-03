/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   C.hpp                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 17:16:43 by alienard          #+#    #+#             */
/*   Updated: 2021/03/02 20:25:29 by alienard         ###   ########.fr       */
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

class C : public Base
{
		private:

		public:
			C();
			C(const C&);
			virtual ~C();
			C&	operator=(const C&);
};
