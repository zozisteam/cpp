/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:06:17 by alalmazr          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/12/16 12:49:11 by alalmazr         ###   ########.fr       */
=======
/*   Updated: 2022/12/18 20:29:29 by alalmazr         ###   ########.fr       */
>>>>>>> 9a06e130610880ece9939af18f2af0d07cee3d16
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::Weapon(std::string type)
{
	this->setType(type);
}

Weapon::~Weapon(){}

const std::string &Weapon::getType() const
{
	return (this->type);
}

void Weapon::setType(std::string type)
{
	this->type = type;
}
