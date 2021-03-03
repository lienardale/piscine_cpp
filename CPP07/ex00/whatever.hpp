/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 09:46:34 by alienard          #+#    #+#             */
/*   Updated: 2021/03/03 16:27:20 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

template< typename T >
void	swap( T & x, T & y){
	T tmp;
	tmp = x;
	x = y;
	y = tmp;
}

template< typename T >
T const & min( T const & x, T const & y){
	return ( x < y ? x : y);
}

template< typename T >
T const & max( T const & x, T const & y){
	return ( x > y ? x : y);
}