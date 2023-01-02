/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 20:32:48 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/02 15:37:09 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	std::cout << "-- Creating Claptrap object 'CLAP'          --" << std::endl;
	Claptrap test1("CLAP");
	std::cout << std::endl;
	std::cout << "-- Creating ScavTrap object 'SCAV'          --" << std::endl;
	ScavTrap test2("SCAV");
	std::cout << std::endl;
	std::cout << "-- Creating FragTrap object 'FRAG' --" << std::endl;
	FragTrap test3("FRAG");
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << test1.getName() << " Hit Points:	" << test1.getHitPoints() << std::endl;
	std::cout << test1.getName() << " Energy Points:	" << test1.getEnergyPoints() << std::endl;
	std::cout << test1.getName() << " Attack Damage:	" << test1.getAttackDamage() << std::endl;
	std::cout << std::endl;
	
	std::cout << std::endl;
	std::cout << test2.getName() << " Hit Points:	" << test2.getHitPoints() << std::endl;
	std::cout << test2.getName() << " Energy Points:	" << test2.getEnergyPoints() << std::endl;
	std::cout << test2.getName() << " Attack Damage:	" << test2.getAttackDamage() << std::endl;
	std::cout << std::endl;

	std::cout << std::endl;
	std::cout << test3.getName() << " Hit Points:	" << test3.getHitPoints() << std::endl;
	std::cout << test3.getName() << " Energy Points:	" << test3.getEnergyPoints() << std::endl;
	std::cout << test3.getName() << " Attack Damage:	" << test3.getAttackDamage() << std::endl;
	std::cout << std::endl;
	
	test1.attack("DOG");
	test2.attack("DOG");
	test3.attack("DOG");
	std::cout << std::endl;
	
	test1.takeDamage(50);
	test2.takeDamage(50);
	test3.takeDamage(50);
	std::cout << std::endl;
	
	test1.beRepaired(30);
	test2.beRepaired(30);
	test3.beRepaired(30);
	std::cout << std::endl;
	
	test3.highFivesGuys();
	std::cout << std::endl;
}