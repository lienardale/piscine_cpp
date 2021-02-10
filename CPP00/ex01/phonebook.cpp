/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 13:11:13 by alienard          #+#    #+#             */
/*   Updated: 2021/02/08 15:18:38 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.h"

int	ft_isdigit(int c)
{
	if (('0' <= c) && (c <= '9'))
		return (1);
	else
		return (0);
}

int	ft_exit(void)
{
	std::cout << "Phonebook closed" << std::endl;
	return (1);
}

int	ft_phonebook_isfull(void)
{
	std::cout << "Phonebook is full, you cannot add another contact." << std::endl;
	return (0);
}

void	ft_display_search_header(PhoneBook_Class *book)
{
	std::cout.width (10);
	std::cout << "index";
	std::cout << "|";
	std::cout.width (10);
	std::cout << book->getInfos(0);
	std::cout << "|";
	std::cout.width (10);
	std::cout << book->getInfos(1);
	std::cout << "|";
	std::cout.width (10);
	std::cout << book->getInfos(2) << std::endl;
}

void	ft_display_search_preview(PhoneBook_Class *book)
{
	unsigned	sz;
	std::string tmp;

	for (int i = 0; i < book->getNbContacts(); i++) {
		std::cout.width (10);
		std::cout << i;
		for (int j = 0; j < 3; j++) {
			std::cout << "|";
			std::cout.width (10);
			sz = book->getContact(i).getData(j).size();
			tmp = book->getContact(i).getData(j);
			if (sz > 10) {
				tmp.resize(9);
				tmp += '.';
			}
			std::cout << tmp;
		}
		std::cout << std::endl;
	}
}

void	ft_display_search_result(PhoneBook_Class *book)
{
	int			contact_index;
	int			i;
	std::string	tmp;
	while (1)
	{
		std::cout << "Enter the id of the one you want infos on :" << std::endl;
		std::cout << ">";
		std::getline(std::cin, tmp);
		book->set_input(tmp);
		if (std::cin.eof())
			break ;
		for (i = 0; book->get_input()[i]; i++){
			if (!isdigit(book->get_input()[i])) {
				contact_index = -1;
				break ;
			}
		}
		if (i == book->get_input().size() && i != 0)
			contact_index = std::stoi(book->get_input());
		if (i == 0 || contact_index < 0 || contact_index >= book->getNbContacts())
			std::cout << "No contact for this id." << std::endl;
		else
		{
			book->print_Contact(contact_index);
			break;
		}
	}
}

int	ft_search(PhoneBook_Class *book)
{
	if (book->getNbContacts() == 0) {
		std::cout << "No contacts yet to display." << std::endl;
		return (0);
	}
	ft_display_search_header(book);
	ft_display_search_preview(book);
	ft_display_search_result(book);
	return (0);
}

int	ft_add(PhoneBook_Class *book)
{
	std::string	tmp;

	std::cout << "Enter contact informations :" << std::endl;
	book->add_Contact();
	// for (int i = 0; i < 11; i++){
	// 	std::cout << book->getInfos(i) << std::endl;
	// 	std::getline(std::cin, tmp);
	// 	book->set_input(tmp);
	// 	book->contacts[book->getNbContacts()].setData( i, book->get_input() );
	// 	// book->contacts[book->getNbContacts()].getData(i) = book->input;
	// 	if (std::cin.eof())
	// 		break ;
	// }
	// book->increm_NbContacts();
	return (0);
}

int	ft_parse(PhoneBook_Class *book)
{
	if (book->get_input().compare("ADD") == 0) {
		if (book->getNbContacts() >= 8)
			return (ft_phonebook_isfull());
		return (ft_add(book));
	}
	else if (book->get_input().compare("SEARCH") == 0)
		return (ft_search(book));
	else if (book->get_input().compare("EXIT") == 0)
		return (ft_exit());
	else
		return (0);
}

int	main(void)
{
	PhoneBook_Class	book;
	std::string	tmp;

	while (1)
	{
		for (int i = 0; i < 4; i++){
			std::cout << book.getMenu(i) << std::endl;
		}
		std::cout << ">";
		std::getline(std::cin, tmp);
		book.set_input(tmp);
		if (ft_parse(&book) == 1)
			break ;
		if (std::cin.eof())
			break ;
	}
	return (0);
}