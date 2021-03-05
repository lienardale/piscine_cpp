/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 21:13:21 by alienard          #+#    #+#             */
/*   Updated: 2021/03/04 14:36:05 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span()
{
	if (PRINT)
		std::cout << "Constructor called" << std::endl;

}

Span::Span(unsigned int n)
{
	this->_stored.reserve(n);
	if (PRINT)
		std::cout << "Constructor called" << std::endl;
}

Span::~Span()
{
	if (PRINT)
		std::cout << "Destructor called" << std::endl;
	this->_stored.clear();
}

Span::Span(const Span& obj)
{
	if (PRINT)
		std::cout << "Copy Constructor called" << std::endl;
	*this = obj;
}

Span&	Span::operator=(const Span& obj)
{
	this->_stored = obj._stored;
	if (PRINT)
		std::cout << "Assignation operator called" << std::endl;
	return *this;
}

void	Span::addNumber(int n){
	std::vector<int>::iterator it;
	it = this->_stored.end();
	if ( this->_stored.size() < this->_stored.capacity())
		this->_stored.insert(it, n);
	else
		throw Span::StorageFullException();
}

void Span::addNumbers(int a, int b){
	if (a > b)
		throw Span::WrongRangeException();
	if (static_cast< unsigned long > (b - a) > this->_stored.capacity() - this->_stored.size()){
		std::cout << "capacity :" << this->_stored.capacity() - this->_stored.size() << std::endl;
		std::cout << "b - a :" << b - a << std::endl;
		throw Span::RangetooBigException();
	}
	else {
		std::vector<int>::iterator it;
		it = this->_stored.end();
		for (int i = a ; i < b ; i++){
			this->_stored.insert(it, i);
		}
	}
}

long unsigned int		Span::shortestSpan(void){
	if (this->_stored.size() < 2)
		throw Span::NotEnoughIntsInStoreException();
	std::sort(this->_stored.begin(), this->_stored.end());
	int range = this->_stored[1] - this->_stored[0];
	for (unsigned long i = 0 ; i < this->_stored.size() - 1 ; i++ ){
		if (this->_stored[i + 1] - this->_stored[i] < range)
			range = this->_stored[i + 1] - this->_stored[i];
	}
	return range;
}

long unsigned int		Span::longestSpan(void){
	if (this->_stored.size() < 2)
		throw Span::NotEnoughIntsInStoreException();
	long	min = *min_element(_stored.begin(), _stored.end());
	long	max = *max_element(_stored.begin(), _stored.end());
	long long span;
	span = max - min;
	span = abs(span);
	return (span);
}

void Span::print_stored(void){
	for (unsigned long i = 0 ; i < this->_stored.size() ; i++)
		std::cout<< "_stored[" << i <<"]="<<_stored[i]<<std::endl;
}

int Span::getSize(void){
	return this->_stored.size();
}