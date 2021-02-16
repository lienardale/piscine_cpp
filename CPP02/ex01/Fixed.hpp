/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 16:46:50 by alienard          #+#    #+#             */
/*   Updated: 2021/02/16 10:37:30 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <cmath>

// #ifdef DEBUG
# define PRINT 1
// #else
// # define PRINT 0
// #endif

class Fixed
{
		private:
			int					_value;
			static const int	_store = 8;
		public:
			Fixed();
			Fixed(const Fixed&);
			Fixed(int const n);
			Fixed(float const f);
			~Fixed();
			Fixed&	operator=(const Fixed&);
			int		getRawBits( void ) const;
			void	setRawBits( int const raw );
			float	toFloat( void ) const;
			int		toInt( void ) const;
};

std::ostream &	operator<<(std::ostream& os, const Fixed& src);
