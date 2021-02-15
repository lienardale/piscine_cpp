/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/15 12:03:27 by alienard          #+#    #+#             */
/*   Updated: 2021/02/15 14:38:14 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <cstring>
#include <sstream>

void	replace(std::ifstream &old_file, std::string name, std::string old_s, std::string new_s){
	std::ofstream	new_file;
	std::string		tmp;
	std::size_t		pos;
	std::size_t		i;
	std::string		new_file_name;

	new_file_name = name + ".replace";
	new_file.open(new_file_name.c_str(), std::ofstream::trunc);
	while (std::getline(old_file, tmp))
	{
		i = 0;
		while (tmp[i]){
			pos = tmp.find(old_s, i);
			if (pos != std::string::npos) {
				while (i < pos){
					new_file << tmp[i];
					i++;
				}
				new_file << new_s;
				i += old_s.size();
			}
			else {
				while (tmp[i]){
					new_file << tmp[i];
					i++;
				}
			}
		}
		new_file << '\n';
	}
	new_file.close();
}

int	main(int ac, char **av)
{
	std::ifstream filename;
	std::string s1;
	std::string s2;

	if ( ac != 4 ){
		std::cerr << "Error : Wrong arg nb." << std::endl;
		return 1;
	}
	filename.open ( av[1] );
	if (!(filename.is_open())){
		std::cerr << "Error : File must exist in order to open it." << std::endl;
		return 1;
	}
	s1 = av[2];
	s2 = av[3];
	if (s1.length() <= 0 || s2.length() <= 0){
		std::cerr << "Error : Replacement strings must not be empty." << std::endl;
		return 1;
	}
	replace(filename, av[1], s1, s2);
	filename.close();
	return 0;
}

