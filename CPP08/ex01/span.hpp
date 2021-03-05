/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 21:13:21 by alienard          #+#    #+#             */
/*   Updated: 2021/03/04 13:48:19 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <vector>

#ifdef DEBUG
# define PRINT 1
#else
# define PRINT 0
#endif

class Span
{
		private:
			std::vector<int> _stored;
			Span();
		public:
			Span(unsigned int);
			Span(const Span&);
			~Span();
			Span&	operator=(const Span&);
			void addNumber(int);
			void addNumbers(int, int);
			long unsigned int	shortestSpan(void);
			long unsigned int	longestSpan(void);
			void print_stored(void);
			int		getSize(void);
			class WrongRangeException : public std::exception
			{
				public:
					virtual const char* what() const throw(){
						return ("Wrong range, usage : addNumbers(av1, av2), with av1 <= av2");
					}
			};
			class StorageFullException : public std::exception
			{
				public:
					virtual const char* what() const throw(){
						return ("Cannot store more ints.");
					}
			};
			class RangetooBigException : public std::exception
			{
				public:
					virtual const char* what() const throw(){
						return ("Cannot store this much ints, lower range.");
					}
			};
			class NotEnoughIntsInStoreException : public std::exception
			{
				public:
					virtual const char* what() const throw(){
						return ("Not enough ints stored to do this.");
					}
			};

};
