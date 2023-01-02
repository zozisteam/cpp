/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 20:32:48 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/02 15:24:44 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	std::cout << std::endl;
	std::cout << "-- Creating ScavTrap object 'DOG' ----------" << std::endl;
	ScavTrap test1("DOG");
	std::cout << std::endl;
	std::cout << "-- Creating ScavTrap object 'DoG'  ---------" << std::endl;
	ScavTrap test2("DoG");
	std::cout << std::endl;
	std::cout << "-- Creating ScavTrap object test3 = test1 --" << std::endl;
	ScavTrap test3 = test1;
	std::cout << std::endl;
	std::cout << "-- Creating ScavTrap object Dog ------------" << std::endl;
	ScavTrap Dog;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << test1.getName() << " Hit Points:		" << test1.getHitPoints() << std::endl;
	std::cout << test1.getName() << " Energy Points:	" << test1.getEnergyPoints() << std::endl;
	std::cout << test1.getName() << " Attack Damage:	" << test1.getAttackDamage() << std::endl;
	std::cout << std::endl;
	
	test1.attack("CAT");
	std::cout << test1.getName() << " Hit Points:		" << test1.getHitPoints() << std::endl;
	std::cout << test1.getName() << " Energy Points:	" << test1.getEnergyPoints() << std::endl;
	std::cout << test1.getName() << " Attack Damage:	" << test1.getAttackDamage() << std::endl;
	std::cout << std::endl;
	
	test1.takeDamage(50);
	std::cout << test1.getName() << " Hit Points:		" << test1.getHitPoints() << std::endl;
	std::cout << test1.getName() << " Energy Points:	" << test1.getEnergyPoints() << std::endl;
	std::cout << test1.getName() << " Attack Damage:	" << test1.getAttackDamage() << std::endl;
	std::cout << std::endl;
	
	test1.beRepaired(30);
	std::cout << test1.getName() << " Hit Points:		" << test1.getHitPoints() << std::endl;
	std::cout << test1.getName() << " Energy Points:	" << test1.getEnergyPoints() << std::endl;
	std::cout << test1.getName() << " Attack Damage:	" << test1.getAttackDamage() << std::endl;
	std::cout << std::endl;
	
	test1.guardGate();
	std::cout << std::endl;
}