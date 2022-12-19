/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:13:50 by alalmazr          #+#    #+#             */
/*   Updated: 2022/12/16 12:46:22 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, Weapon weapon)
{
	this->name = name;
	this->weapon = weapon;
}

void HumanA::attack()
{
	const std::string &wep = this->weapon.getType(); 
	std::cout << name << " attacks with their " << wep << std::endl;
}
