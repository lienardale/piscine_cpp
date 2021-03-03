/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/01 21:58:05 by alienard          #+#    #+#             */
/*   Updated: 2021/03/02 16:58:59 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "convert.hpp"

convert::convert()
{
	if (PRINT)
		std::cout << "Constructor called" << std::endl;

}

convert::convert(const char *input) : _c(' '), _i(0), _f(0.0f), _d(0.0), _input(input)
{
	if (PRINT)
		std::cout << "Constructor called" << std::endl;

}

convert::~convert()
{
	if (PRINT)
		std::cout << "Destructor called" << std::endl;

}

convert::convert(const convert& obj) : _c(obj._c), _i(obj._i), _f(obj._f), _d(obj._d), _input(obj._input)
{
	if (PRINT)
		std::cout << "Copy Constructor called" << std::endl;
	// *this = obj;
}

convert&	convert::operator=(const convert& obj)
{
	this->_c = obj._c;
	this->_i = obj._i;
	this->_f = obj._f;
	this->_d = obj._d;
	this->_input = obj._input;
	if (PRINT)
		std::cout << "Assignation operator called" << std::endl;
	return *this;
}

void	convert::get_type(){
	if (is_c()){
		this->_c = this->_input[0];
		this->_i = static_cast<int>(this->_c);
		this->_f = static_cast<float>(this->_c);
		this->_d = static_cast<double>(this->_c);
	}
	else if (is_i()){
		this->_i = atoi(this->_input.c_str());
		this->_c = static_cast<char>(this->_i);
		// std::cout << "Test : |"<< this->_c << "|" << std::endl;
		this->_f = static_cast<float>(this->_i);
		this->_d = static_cast<double>(this->_i);
	}
	else if (is_f()){
		this->_f = atof(this->_input.c_str());
		this->_c = static_cast<char>(this->_f);
		this->_i = static_cast<int>(this->_f);
		this->_d = static_cast<double>(this->_f);
	}
	else if (is_d()){
		this->_d = atof(this->_input.c_str());
		this->_c = static_cast<char>(this->_d);
		this->_i = static_cast<int>(this->_d);
		this->_f = static_cast<float>(this->_d);
	}
	else
		throw NoConvertionException();
}

void	convert::print_casts(){
	std::cout << "char: ";
	try {
		std::cout << get_c() << std::endl;
	}
	catch(const std::exception& e){
		std::cout /*<< "Exception - char cast : " */<< e.what() << '\n';
	}
	std::cout << "int: ";
	try
	{
		std::cout << get_i() << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cout << e.what() << '\n';
	}
	std::cout << "float: " << get_f() << std::endl;
	std::cout << "double: " << get_d() << std::endl;
}

bool	convert::is_c(void) const{
	// int	n = static_cast<int>(this->_input[0]);

	// if (this->_input.size() == 1 && ((n >= 32 && n < 48) || (n >= 58 && n < 127)))
	// 	return true;
	if (this->_input.size() == 1 && ((this->_input[0] >= ' ' && this->_input[0] < '0') 
		|| (this->_input[0] > '9' && this->_input[0] < 127)))
		return true;
	return false;
}

bool	convert::is_i(void) const{
	int	j = 0;
	if (this->_input[j] == 0)
		return false;
	if (this->_input[j] == '-')
		j++;
	for (int i  = 0; this->_input[i + j] ; i++){
		if (this->_input[i + j] < '0' || this->_input[i] > '9')
			return false;
	}
	return true;
}

bool	convert::is_f(void) const{
	int	j = 0;
	bool	dec_dot = false;
	if (this->_input == "nanf" || this->_input == "-inff" || this->_input == "+inff")
		return true;
	if (this->_input[j] == '-')
		j++;
	for (int i = 0 ; this->_input[i + j] ; i++){
		if (this->_input[i] == '.'){
			if (dec_dot == true)
				return false;
			dec_dot = true;
		}
		else if (this->_input[i] == 'f' && this->_input[i + 1] == '\0')
			break;
		else if (this->_input[i] < '0' || this->_input[i] > '9')
			return false;
	}
	if (dec_dot == false)
		return false;
	return true;
}

bool	convert::is_d(void) const{
	int	j = 0;
	bool	dec_dot = false;
	if (this->_input == "nan" || this->_input == "-inf" || this->_input == "+inf")
		return true;
	if (this->_input[j] == '-')
		j++;
	for (int i = 0 ; this->_input[i + j] ; i++){
		if (this->_input[i] == '.'){
			if (dec_dot == true)
				return false;
			dec_dot = true;
		}
		else if (this->_input[i] < '0' || this->_input[i] > '9')
			return false;
	}
	if (dec_dot == false)
		return false;
	return true;

}

std::string	convert::get_c(void) const{
	std::stringstream ss;

	if (this->_f != this->_f || this->_d != this->_d)
		throw ImposibleConvertionException();
	if (this->_c < ' ' || this->_c > '~'){
		// std::cout << this->_c << std::endl;
		throw NonDisplayableException();
	}
	ss << "'" << this->_c << "'";
	return ss.str();
}

std::string		convert::get_i(void) const{
	std::stringstream ss;

	if (this->_f != this->_f || this->_d != this->_d)
		throw ImposibleConvertionException();
		ss << this->_i;
	return ss.str();
}

std::string		convert::get_f(void) const{
	std::stringstream ss;
	ss << this->_f;
	if (static_cast<double>(this->_i) == this->_f)
		ss << ".0";
	ss << "f";
	return ss.str();
}

std::string		convert::get_d(void) const{
	std::stringstream ss;
	ss << this->_d;
	if (static_cast<double>(this->_i) == this->_d)
		ss << ".0";
	return ss.str();
}
