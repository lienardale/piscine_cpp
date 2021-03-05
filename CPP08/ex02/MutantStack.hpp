/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 21:14:40 by alienard          #+#    #+#             */
/*   Updated: 2021/03/04 17:44:38 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <stack>

#ifdef DEBUG
# define PRINT 1
#else
# define PRINT 0
#endif

template < typename T >
class MutantStack : public std::stack<T>
{
		private:

		public:
			MutantStack(void) : std::stack<T>() {}
			MutantStack(const MutantStack<T> &);
			virtual ~MutantStack(void) {}
			MutantStack&	operator=(const MutantStack<T>&);
			// "By default, if no container class is specified for a particular stack class instantiation, the standard container deque is used."
			typedef typename std::deque<T >::iterator iterator;
			iterator	begin(){
				return this->c.begin();
			}
			iterator	end(){
				return this->c.end();
			}
			typedef typename std::deque<T >::const_iterator const_iterator;
			const_iterator	begin() const{
				return this->c.begin();
			}
			const_iterator	end() const{
				return this->c.end();
			}
};
