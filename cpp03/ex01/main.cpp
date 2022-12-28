/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 20:32:48 by alalmazr          #+#    #+#             */
/*   Updated: 2022/12/28 15:28:06 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
std::cout << std::endl;
	std::cout << "default constructor:" << std::endl;
	Claptrap cp1;
	cp1.attack("some object");
	cp1.setName("Claptrapper");
	cp1.attack("some object");
	std::cout << std::endl;

	std::cout << "constructor with name:" << std::endl;
	Claptrap cp2("Clappertrap");
	cp2.attack("another object");
	std::cout << std::endl;

	std::cout << "copy constructor:" << std::endl;
	Claptrap copied(cp2);
	copied.attack("an object");
	copied.setName("Copied");
	copied.attack("an object");
	std::cout << std::endl;

	Claptrap dog = copied;
	dog.attack("toilet");
	dog.setName("Dog");
	dog.attack("toilet");
	std::cout << std::endl;


	std::cout << "*REAL MAIN*" << std::endl;
	Claptrap test1("Dog");
	Claptrap test2("Cat");

	test1.attack("floor");
	test1.takeDamage(1);
	test1.beRepaired(2);
	test1.attack("human");
	test1.attack("toilet");
	test1.attack("object");
	
	test1.attack("Cat");
	test2.takeDamage(1);
	test2.beRepaired(3);

	test2.attack("Dog");
	test1.takeDamage(10);
	test1.beRepaired(3);
	
	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << std::endl;
}