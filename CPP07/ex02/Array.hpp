/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 11:34:26 by alienard          #+#    #+#             */
/*   Updated: 2021/03/04 10:17:54 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

template< typename T >
class Array
{
		private:
			T *				_array;
			unsigned int	_len;
		public:
			Array(void) : _array(0), _len(0) {}
			Array(unsigned int n) : _array(new T[n]()), _len(n) {}
			Array(Array<T> const & array) { *this = array; }
			~Array(void) { delete[] _array; }
			Array<T> &	operator=(const Array& old) {
					this->_array = new T[old.size()];
					for (size_t i = 0; i < old.size(); i++)
						this->_array[i] = old._array[i];
					this->_len = old.size();
					return *this;
			}
			class NullValueException : public std::exception{
				virtual const char* what() const throw();
			};
			T & operator[](unsigned int i) const {
				if ( i < 0 || i >= this->_len )
					throw NullValueException();
				return _array[i];
			}
			unsigned int	size(void) const {return this->_len;}
};

template< typename T >
const char* Array<T>::NullValueException::what() const throw(){
		return "Value that you tried to reach was NULL.";
};