/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 14:54:10 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/02 15:37:45 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "Default FragTrap() constructor" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::~FragTrap()
{
	std::cout << "~FragTrap() destructor" << std::endl;
}

FragTrap::FragTrap(std::string name)
{
	std::cout << "FragTrap(std::string name) constructor" << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &other)
{
	std::cout << "FragTrap(const FragTrap &other) constructor" << std::endl;
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;;
}

FragTrap FragTrap::operator=(const FragTrap &other)
{
	std::cout << "FragTrap assignment operator" << std::endl;
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	return (*this);
}

void FragTrap::attack(const std::string& target) //sUPPOSED TO BE INHERITED
{
	if (this->getHitPoints() > 0 && this->getEnergyPoints() > 0) {
            std::cout << "FRAGTRAP " << name << " attacks " << target << " and causes " << attackDamage << " points of damage!" << std::endl;
            energyPoints--;
    } else {
			if (this->getEnergyPoints() <= 0)
          		std::cout << name << " has no energy points left!" << std::endl;
			if (this->getHitPoints() <= 0)
				std::cout << name << " is dead!" << std::endl;
			}
}

void FragTrap::highFivesGuys()
{
	if (this->getHitPoints() > 0)
		std::cout << name << " says: HIGH FIVE GUYS!" << std::endl;
	else
		std::cout << name << " is dead!" << std::endl;
}
