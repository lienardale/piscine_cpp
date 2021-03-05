/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 16:29:39 by alienard          #+#    #+#             */
/*   Updated: 2021/03/04 10:05:51 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>
#include <algorithm>

template< typename T >
int	easyfind(T cont, int i){
	typename T::iterator p = std::find( cont.begin(), cont.end(), i);
	if ( p !=  cont.end())
		return (*p);
	else
		throw std::exception();
}