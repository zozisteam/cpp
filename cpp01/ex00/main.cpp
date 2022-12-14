/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:50:04 by alalmazr          #+#    #+#             */
/*   Updated: 2022/12/13 11:59:08 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"


int main()
{
	std::cout << "====================CONSTRUCTOR()=========================" << std::endl;
	Zombie z0("Zomcat Stacky");
	Zombie z1("Zomdog Stacky");
	std::cout << "these zombies will implicitly call destructor at end of program" << std::endl;
	std::cout << "==========================================================" << std::endl;
	
	std::cout << std::endl;
	
	std::cout << "=====================NEWZOMBIE()========================" << std::endl;
	Zombie *z2 = newZombie("Zombiedumb Heapy");
	z2->~Zombie();
	std::cout << "zombies created on heap have to be explicitly destroyed" << std::endl;
	std::cout << "=========================================================" << std::endl;

	std::cout << std::endl;
	
	std::cout << "======================RANDOMCHUMP()=======================" << std::endl;
	randomChump("Confucius Stacky");
	randomChump("Losty Stacky");
	std::cout << "these zombies implicitly call destructor" << std::endl;
	std::cout << "==========================================================" << std::endl;

	std::cout << std::endl;
	
	std::cout << "====================IMPLICIT DESTRUCTION===================" << std::endl;

}