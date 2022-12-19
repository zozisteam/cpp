/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 15:16:46 by alalmazr          #+#    #+#             */
/*   Updated: 2022/12/19 09:09:00 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name)
{
	this->name = name;
	this->weapon->setType("bare hands");
}

HumanB::~HumanB()
{
	delete weapon;
}

void HumanB::setWeapon(Weapon weapon)
{
	this->weapon = &weapon;
}

void HumanB::attack()
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
