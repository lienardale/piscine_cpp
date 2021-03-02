/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 21:14:40 by alienard          #+#    #+#             */
/*   Updated: 2021/03/02 21:14:40 by alienard         ###   ########.fr       */
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

class MutantStack
{
		private:

		public:
			MutantStack();
			MutantStack(const MutantStack&);
			~MutantStack();
			MutantStack&	operator=(const MutantStack&);
};
