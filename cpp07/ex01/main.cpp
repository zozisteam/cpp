/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:32:32 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/18 20:02:49 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"
#include <iostream>


void	print(std::string &str)
{
	std::cout << str << std::endl;
}

void inc(int &n)
{
	n++;
}

int main( void ) 
{
	std::string str[5] = { "Blue", "Red", "Orange", "Yellow", "Black"};
	int			ar[5] = {1, 2, 3, 4, 5};
	::iter(str, 5, &print);
	
	std::cout << std::endl;
	std::cout << "Before iter call for int array" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << ar[i] << " ";
	std::cout << std::endl;
	::iter(ar, 5, &inc);
	std::cout << "After iter call for int array" << std::endl;
	for (int i = 0; i < 5; i++)
		std::cout << ar[i] << " ";
	std::cout << std::endl;
	return 0;
}