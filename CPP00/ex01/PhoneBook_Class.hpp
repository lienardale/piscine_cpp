/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook_Class.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 13:55:44 by alienard          #+#    #+#             */
/*   Updated: 2021/02/08 15:11:46 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

class PhoneBook_Class
{
	private:
		std::string		_infos[11];
		std::string		_menu[4];
		std::string		_input;
		static int		_nb_contacts;
		Contact_Class	_contacts[8];
	public:
		std::string		getInfos(int i);
		std::string		getMenu(int i);
		int				getNbContacts( void );
		void			increm_NbContacts( void );
		void			set_input( std::string str );
		std::string		get_input( void );
		Contact_Class	getContact( int i );
		void			print_Contact( int i );
		void			add_Contact( void  );
		PhoneBook_Class();
		~PhoneBook_Class();
};

#endif