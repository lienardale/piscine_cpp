/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/16 12:14:13 by alienard          #+#    #+#             */
/*   Updated: 2021/02/16 12:14:13 by alienard         ###   ########.fr       */
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

class NinjaTrap
{
		private:

		public:
			NinjaTrap();
			NinjaTrap(const NinjaTrap&);
			~NinjaTrap();
			NinjaTrap&	operator=(const NinjaTrap&);
};
