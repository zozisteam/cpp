/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 20:32:54 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/02 15:20:51 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

Claptrap::Claptrap(): name("unnamed"), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "Claptrap() default constructor" << std::endl;
}

Claptrap::Claptrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {
	std::cout << "Claptrap(std::string name) constructor" << std::endl;
}

Claptrap::~Claptrap(){
	std::cout << "~Claptrap() destructor" << std::endl;
}


Claptrap   Claptrap::operator=(const Claptrap &other)
{
	std::cout << "copy assignment() constructor" << std::endl;
	this->name = other.name;
	this->hitPoints = other.hitPoints;
	this->energyPoints = other.energyPoints;
	this->attackDamage = other.attackDamage;
	return (*this);
}

void Claptrap::attack(const std::string& target) {
        if (energyPoints > 0) {
            std::cout << name << " attacks " << target << " and causes " << attackDamage << " points of damage!" << std::endl;
            energyPoints--;
        } else {
            std::cout << name << " has no energy points left!" << std::endl;
        }
    }


void Claptrap::beRepaired(unsigned int amount) //INHERITED
{
	if (this->getHitPoints() < 1) {
		std::cout << name << " is dead!" << std::endl;
		return ;
	}
	if (this->getEnergyPoints() < 1){
		std::cout << name << " has no enough energy pts to repair!" << std::endl;
		return ;
	}
	hitPoints += amount;
	std::cout << name << " repairs itself and gets " << amount << " hit points back!" << std::endl;
	energyPoints--;
}

void Claptrap::takeDamage(unsigned int amount)
{
	if (this->getHitPoints() > 0)
	{
		this->hitPoints = hitPoints - amount;
		std::cout << name << " just took " << amount << " damage!" << std::endl;
		if (this->getHitPoints() < 1)
			std::cout << name << " died!" << std::endl;
	}
}

int Claptrap::getHitPoints() const
{
	return hitPoints;
}

int Claptrap::getEnergyPoints() const
{
	return energyPoints;
}

int Claptrap::getAttackDamage() const
{
	return attackDamage;
}

std::string Claptrap::getName() const
{
	return name;
}

void Claptrap::setName(std::string name)
{
	this->name = name;
}

void Claptrap::setAttackDamage(int damage)
{
	attackDamage = damage;
} 
