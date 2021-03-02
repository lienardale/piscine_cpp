/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alienard <alienard@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/03/02 21:13:49 by alienard          #+#    #+#             */
/*   Updated: 2021/03/02 21:14:05 by alienard         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int main()
{
	Span sp = Span(5);
	sp.addNumber(5); sp.addNumber(3); sp.addNumber(17); sp.addNumber(9); sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl; std::cout << sp.longestSpan() << std::endl;
	return 0;
}
