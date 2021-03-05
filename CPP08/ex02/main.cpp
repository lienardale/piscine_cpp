/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 21:14:57 by alienard          #+#    #+#             */
/*   Updated: 2021/03/05 09:49:45 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <list>
#include <vector>

int main()
{
	MutantStack<int> mstack;
	std::list<int> mstack_list;
	std::cout << "mstack.empty:"<< mstack.empty() << " | stack_list.empty:"<< mstack_list.empty() << std::endl; //Test whether container is empty
	mstack.push(5); //Insert element
	mstack_list.push_back(5); //Insert element
	mstack.push(17);
	mstack_list.push_back(17);
	std::cout << "mstack.top:" << mstack.top() << " | mstack_list.top:" << mstack_list.back() << std::endl; //Access next element
	mstack.pop(); //Remove top element
	mstack_list.pop_back(); //Remove top element
	std::cout << "mstack.size:"<< mstack.size() << " | mstack_list.size:"<< mstack_list.size()<< std::endl; //Return size
	mstack.push(3);
	mstack_list.push_back(3);
	mstack.push(5);
	mstack_list.push_back(5);
	mstack.push(737);
	mstack_list.push_back(737);
	mstack.push(2147483647);
	mstack_list.push_back(2147483647);
	mstack.push(-2147483648);
	mstack_list.push_back(-2147483648);
	mstack.push(-12);
	mstack_list.push_back(-12);
	//[...]
	mstack.push(0);
	mstack_list.push_back(0);
	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();
	std::list<int>::iterator itl = mstack_list.begin();
	std::list<int>::iterator itle = mstack_list.end();
	++it;
	--it;
	++itl;
	--itl;
	while (it != ite && itl != itle) {
		std::cout << "*it:"<< *it << " | *itl:"<< *itl << std::endl;
		++it;
		++itl;
	}
	std::cout << "mstack.size:"<< mstack.size() << " | mstack_list.size:"<< mstack_list.size()<< std::endl; //Return size
	std::cout << "mstack.empty:"<< mstack.empty() << " | stack_list.empty:"<< mstack_list.empty() << std::endl; //Test whether container is empty
	std::list<int> sl(mstack_list);
	std::stack<int> s(mstack);
	return 0;
}
