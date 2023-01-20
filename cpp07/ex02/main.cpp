/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/20 10:52:15 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/20 10:59:19 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Array.hpp"
#include <iostream>

int main( void ) 
{
	Array<std::string>	strarr(10);

	strarr[0] = "1 dog";
	strarr[1] = "2 dogs";
	strarr[2] = "3 cats";
	strarr[3] = "1 cat";
	std::cout << "strarr.size() = " << strarr.size() << std::endl;

	for(unsigned int i = 0; i < strarr.size(); i++)
		std::cout << i<< ": "<<strarr[i] << std::endl;
	try
	{
		std::cout << strarr[59] << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}

	return 0;
}