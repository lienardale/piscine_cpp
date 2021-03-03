/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 10:05:07 by alienard          #+#    #+#             */
/*   Updated: 2021/03/03 17:03:45 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

template< typename T >
void	iter(T * str, size_t len, void (*f)(T const &)){
	if (!str)
		return ;
	for (size_t i = 0 ; i < len ; i++)
		f(str[i]);
}
