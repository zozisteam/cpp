/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/18 19:32:32 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/20 10:30:34 by alalmazr         ###   ########.fr       */
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
	std::cout << "call [iter(str, 5, &print)]" << std::endl;
	::iter(str, 5, &print);
	std::cout << "end [iter(str, 5, &print)]" << std::endl;
	std::cout << std::endl;
	

	int	ar[5] = {1, 2, 3, 4, 5};
	std::cout << "int ar[5]: " ;
	for (int i = 0; i < 5; i++)
		std::cout << ar[i] << " ";
	std::cout << std::endl;
	std::cout << "call [iter(ar, 5, &inc)]" << std::endl;
	::iter(ar, 5, &inc);
	std::cout << "end [iter(ar, 5, &inc)]" << std::endl;
	std::cout << "int ar[5]: " ;
	for (int i = 0; i < 5; i++)
		std::cout << ar[i] << " ";
	std::cout << std::endl;
	return 0;
}