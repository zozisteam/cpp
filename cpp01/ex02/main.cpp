/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 15:20:43 by alalmazr          #+#    #+#             */
/*   Updated: 2022/12/13 15:41:46 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main()
{
	// string initialized 
	std::string string = "HI THIS IS BRAIN";
	// stringPTR: A pointer to the string.
	std::string *stringPTR = &string;
	// stringREF: A reference to the string.
	std::string &stringREF = string;
	//----------
	std::cout << std::endl;
	//----------
	std::cout << "VARIABLE MEMORY ADRESSES" << std::endl;
	std::cout << "str: 		" << &string << std::endl;
	std::cout << "stringPTR: 	" << stringPTR << std::endl;
	std::cout << "stringREF: 	" << &stringREF << std::endl;
	//----------
	std::cout << std::endl;
	//----------
	std::cout << "VARIABLE VALUES" << std::endl;
	std::cout << "str: 		" << string << std::endl;
	std::cout << "stringPTR: 	" << *stringPTR << std::endl;
	std::cout << "stringREF: 	" << stringREF << std::endl;
}