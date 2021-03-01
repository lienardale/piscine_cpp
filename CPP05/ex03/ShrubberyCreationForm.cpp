/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/25 11:39:30 by alienard          #+#    #+#             */
/*   Updated: 2021/02/28 17:39:16 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form("ShrubberyCreationForm", 145, 137, "the_garden")
{
	if (PRINT)
		std::cout << "Constructor called" << std::endl;

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : Form("ShrubberyCreationForm", 145, 137, target)
{
	if (PRINT)
		std::cout << "Constructor called" << std::endl;

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	if (PRINT)
		std::cout << "Destructor called" << std::endl;

}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj) : Form(obj.getName(), obj.getsignGrade(), obj.getexecGrade(), obj.getTarget())
{
	if (PRINT)
		std::cout << "Copy Constructor called" << std::endl;
	// *this = obj;
}

ShrubberyCreationForm&	ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj)
{
	Form::operator=(obj);
	if (PRINT)
		std::cout << "Assignation operator called" << std::endl;
	return *this;
}

void		ShrubberyCreationForm::real_exec(Bureaucrat const & executor) const{
	std::string filename = this->getTarget() + "_shrubbery";
	std::ofstream	outputFile(filename.c_str());

	outputFile	<< "               ,@@@@@@@," << std::endl
				<< "       ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl
				<< "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl
				<< "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl
				<< "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl
				<< "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl
				<< "   `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl
				<< "       |o|        | |         | |" << std::endl
				<< "       |.|        | |         | |" << std::endl
				<< "    \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_" << std::endl;
	std::cout << filename << " was created by " << executor.getName() << std::endl;
}


//         /|\
//        /*|O\
//       /*/|\*\
//      /X/O|*\X\
//     /*/X/|\X\*\
//    /O/*/X|*\O\X\
//   /*/O/X/|\X\O\*\
//  /X/O/*/X|O\X\*\O\
// /O/X/*/O/|\X\*\O\X\
//         |X|

//           &&& &&  & &&
//       && &\/&\|& ()|/ @, &&
//       &\/(/&/&||/& /_/)_&/_&
//    &() &\/&|()|/&\/ '%" & ()
//   &_\_&&_\ |& |&&/&__%_/_& &&
// &&   && & &| &| /& & % ()& /&&
//  ()&_---()&\&\|&&-&&--%---()~
//      &&     \|||
//              |||
//              |||
//              |||

//                ,@@@@@@@,
//        ,,,.   ,@@@@@@/@@,  .oo8888o.
//     ,&%%&%&&%,@@@@@/@@@@@@,8888\88/8o
//    ,%&\%&&%&&%,@@@\@@@/@@@88\88888/88'
//    %&&%&%&/%&&%@@\@@/ /@@@88888\88888'
//    %&&%/ %&%%&&@@\ V /@@' `88\8 `/88'
//    `&%\ ` /%&'    |.|        \ '|8'
//        |o|        | |         | |
//        |.|        | |         | |
// jgs \\/ ._\//_/__/  ,\_//__\\/.  \_//__/_