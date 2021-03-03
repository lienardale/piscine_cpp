/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 17:16:07 by alienard          #+#    #+#             */
/*   Updated: 2021/03/02 20:39:02 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <exception>

#ifdef DEBUG
# define PRINT 1
#else
# define PRINT 0
#endif

class Base
{
		private:

		public:
			Base();
			Base(const Base&);
			virtual ~Base();
			Base&	operator=(const Base&);
};
