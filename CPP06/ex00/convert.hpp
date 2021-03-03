/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 21:58:05 by alienard          #+#    #+#             */
/*   Updated: 2021/03/02 16:19:02 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <cstring>
#include <exception>
#include <sstream>
#include <cstdlib>

#ifdef DEBUG
# define PRINT 1
#else
# define PRINT 0
#endif

class convert
{
		private:
			char		_c;
			int			_i;
			float		_f;
			double		_d;
			std::string	_input;
			convert();
		public:
			class ImposibleConvertionException : public std::exception{
				virtual const char* what() const throw(){
					return "Convertion impossible.";
				}
			};
			class NonDisplayableException : public std::exception{
				virtual const char* what() const throw(){
					return "Non displayable.";
				}
			};
			class NoConvertionException : public std::exception{
				virtual const char* what() const throw(){
					return "No conversion.";
				}
			};
			convert(const char *arg);
			convert(const convert&);
			~convert();
			convert&	operator=(const convert&);
			void			get_type();
			void			print_casts();
			bool			is_c(void) const;
			bool			is_i(void) const;
			bool			is_f(void) const;
			bool			is_d(void) const;
			std::string		get_c(void) const;
			std::string		get_i(void) const;
			std::string		get_f(void) const;
			std::string		get_d(void) const;
};
