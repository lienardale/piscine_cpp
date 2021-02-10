/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact_Class.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/04 09:50:49 by alienard          #+#    #+#             */
/*   Updated: 2021/02/10 16:35:29 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class Contact_Class
{
	private:
		std::string	_format(std::string str);
		static int	_nbContacts;
		std::string	_data[11];

	public:
		static int	getNbContacts(void);
		std::string	getData(int i);
		void		setData(int i, std::string str);
		Contact_Class();
		~Contact_Class();
};

#endif