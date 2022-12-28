/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 20:32:54 by alalmazr          #+#    #+#             */
/*   Updated: 2022/12/28 15:20:46 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

Claptrap::Claptrap(): name("unnamed"), hitPoints(10), energyPoints(10), attackDamage(0) {}

Claptrap::Claptrap(std::string name) : name(name), hitPoints(10), energyPoints(10), attackDamage(0) {}

Claptrap::~Claptrap(){}


Claptrap   Claptrap::operator=(const Claptrap &other)
{
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

void Claptrap::takeDamage(unsigned int amount) {
        hitPoints -= amount;

        if (hitPoints < 0)
            hitPoints = 0;

        std::cout << name << " takes " << amount << " points of damage!" << std::endl;
    }

void Claptrap::beRepaired(unsigned int amount)
{
	hitPoints += amount;

	if (hitPoints > 10) {
		hitPoints = 10;
	}

	if (energyPoints > 0) {
		std::cout << name << " repairs itself and gets " << amount << " hit points back!" << std::endl;
		energyPoints--;
	} else {
		std::cout << name << " has no energy points left!" << std::endl;
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

void Claptrap::setName(std::string name)
{
	this->name = name;
}

void Claptrap::setAttackDamage(int damage)
{
	attackDamage = damage;
} 
