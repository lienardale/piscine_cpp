/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/22 14:25:01 by alienard          #+#    #+#             */
/*   Updated: 2021/02/25 11:27:30 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
	// if (PRINT)
	// 	std::cout << "Constructor called" << std::endl;
	for(int i = 0 ; i < 4; i++){
		this->_stuff[i] = NULL;
	}
}

MateriaSource::~MateriaSource()
{
	// if (PRINT)
	// 	std::cout << "Destructor called" << std::endl;

}

MateriaSource::MateriaSource(const MateriaSource& obj)
{
	// if (PRINT)
	// 	std::cout << "Copy Constructor called" << std::endl;
	for (int i = 0 ; i < 4 ; i++){
		if (this->_stuff[i] != NULL)
			delete this->_stuff[i];
	}
	for(int i = 0 ; obj._stuff[i]; i++){
		if (obj._stuff[i])
			this->_stuff[i] = obj._stuff[i]->clone();
		else
			this->_stuff[i] = NULL;
	}
}

MateriaSource&	MateriaSource::operator=(const MateriaSource& obj)
{
	// if (PRINT)
	// 	std::cout << "Assignation operator called" << std::endl;
	for (int i = 0 ; i < 4 ; i++){
		if (this->_stuff[i] != NULL)
			delete this->_stuff[i];
	}
	for(int i = 0 ; i < 4 ; i++){
		if (obj._stuff[i])
			this->_stuff[i] = obj._stuff[i]->clone();
		else
			this->_stuff[i] = NULL;
	}
	return *this;
}

void 	MateriaSource::learnMateria(AMateria* new_m){
// 	learnMateria must copy the Materia passed as parameter, and store it in memory
// to be cloned later. Much in the same way as for Character , the Source can know at
// most 4 Materia, which are not necessarily unique.
	for(int i = 0 ; i < 4; i++){
		if (!(this->_stuff[i])){
			this->_stuff[i] = new_m;
			return ;
		}
	}
}

AMateria* 	MateriaSource::createMateria(std::string const & type){
// 	createMateria(std::string const &) will return a new Materia, which will be a
// copy of the Materia (previously learned by the Source) which type equals the parameter.
// Returns 0 if the type is unknown.
	for(int i = 0 ; i < 4; i++){
		if (this->_stuff[i] && this->_stuff[i]->getType() == type)
			return this->_stuff[i]->clone();
	}
	return (NULL);
}
