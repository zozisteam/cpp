/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:16:46 by alalmazr          #+#    #+#             */
/*   Updated: 2022/12/14 15:54:17 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(const std::string &name)
{
	this->name = name;
	this->weapon = nullptr;
}

HumanB::~HumanB()
{
	delete weapon;
}

void HumanB::setWeapon(const std::string &weaponType)
{
	if (weapon == nullptr)
	{
		weapon = new Weapon();
	}
	this->weapon->setType(weaponType);
}

void HumanB::attack() const
{
	if (weapon == nullptr)
	{
		std::cout << name << " attacks with their bare hands" << std::endl;
	}
	else
	{
		std::cout << name << " attacks with their " << weapon->getType() << std::endl;
	}
}
