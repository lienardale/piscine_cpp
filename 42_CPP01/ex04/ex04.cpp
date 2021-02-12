/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/12 16:11:02 by alienard          #+#    #+#             */
/*   Updated: 2021/02/12 17:21:45 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <iostream>
# include <iomanip>
# include <string>

int main(void)
{
	std::string		tmp = "HI THIS IS BRAIN";
	std::string 	*tmp_ptr = &tmp;
	std::string&	tmp_ref = tmp;

	std::cout << *tmp_ptr << std::endl;
	std::cout << tmp_ref << std::endl;
	return 0;
}