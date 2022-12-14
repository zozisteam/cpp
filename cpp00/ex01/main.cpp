/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 12:42:36 by alalmazr          #+#    #+#             */
/*   Updated: 2022/12/07 16:21:35 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

void options()
{
	std::cout << "**********************************" << std::endl;
	std::cout << "*--------PHONEBOOK OPTIONS-------*" << std::endl;
	std::cout << "*-      -ADD-                   -*" << std::endl;
	std::cout << "*-      -SEARCH-                -*" << std::endl;
	std::cout << "*-      -EXIT-                  -*" << std::endl;
	std::cout << "*--------------------------------*" << std::endl;
	std::cout << "**********************************" << std::endl;
}

int main(int argc, char **argv)
{
	PhoneBook phoneBook;
	std::string entry;

	std::cout << "=============================================" << std::endl;
	std::cout << "----  PHONE BOOK ----" << std::endl;
	options();
	while (1)
	{
		std::cin >> entry;
		if (entry == "ADD" || entry == "add")
			phoneBook.phoneBookAdd();
		else if (entry == "SEARCH" || entry == "search")
			phoneBook.phoneBookSearch();
		else if (entry == "EXIT" || entry == "exit")
		{
			phoneBook.phoneBookExit();
			return (0);
		}
	}
}	