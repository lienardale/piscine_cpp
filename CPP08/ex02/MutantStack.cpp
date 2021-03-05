/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 21:14:40 by alienard          #+#    #+#             */
/*   Updated: 2021/03/05 09:41:33 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"

template <typename T>
MutantStack<T>::MutantStack(const MutantStack<T>& obj)
{
	if (PRINT)
		std::cout << "Copy Constructor called" << std::endl;
	*this = obj;
}

template <typename T>
MutantStack<T>&	MutantStack<T>::operator=(const MutantStack<T>& obj)
{
	if (PRINT)
		std::cout << "Assignation operator called" << std::endl;
	std::stack<T>::operator=(obj);
	return *this;
}

