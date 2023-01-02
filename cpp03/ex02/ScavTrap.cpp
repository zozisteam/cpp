/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 09:25:32 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/02 15:29:04 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	std::cout << "Default ScavTrap() constructor" << std::endl;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::~ScavTrap()
{
	std::cout << "~ScavTrap() destructor" << std::endl;
}

ScavTrap::ScavTrap(std::string name)
{
	std::cout << "ScavTrap(std::string name) constructor" << std::endl;
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &other)
{
	std::cout << "ScavTrap(const ScavTrap &other) constructor" << std::endl;
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;;
}

ScavTrap ScavTrap::operator=(const ScavTrap &other)
{
	std::cout << "ScavTrap assignment operator" << std::endl;
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	return (*this);
}

void ScavTrap::attack(const std::string& target) //sUPPOSED TO BE INHERITED
{
	if (this->getHitPoints() > 0 && this->getEnergyPoints() > 0) {
            std::cout << "SCAVTRAP "<< name << " attacks " << target << " and causes " << attackDamage << " points of damage!" << std::endl;
            energyPoints--;
    } else {
			if (this->getEnergyPoints() <= 0)
          		std::cout << name << " has no energy points left!" << std::endl;
			if (this->getHitPoints() <= 0)
				std::cout << name << " is dead!" << std::endl;
			}
}

void ScavTrap::guardGate()
{
	if (this->getHitPoints() > 0)
		std::cout << name << " is in guard gate mode." << std::endl;
	else
		std::cout << name << " is dead!" << std::endl;
}
