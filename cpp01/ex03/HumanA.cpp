/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:13:50 by alalmazr          #+#    #+#             */
/*   Updated: 2022/12/13 16:20:20 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(const std::string& name, const std::string& weaponType)
{
	this->name = name;
	weapon.setType(weaponType);
}
void HumanA::attack() const
{
	std::cout << name << " attacks with their " << weapon.getType() << std::endl;
}
