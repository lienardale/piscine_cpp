/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/03 10:05:07 by alienard          #+#    #+#             */
/*   Updated: 2021/03/03 11:14:54 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <string>

template< typename T >
void	iter(T * str, size_t len, void (*f)(T &)){
	if (!str)
		return ;
	for (size_t i = 0 ; i < len && str[i] ; i++)
		f(str[i]);
}
