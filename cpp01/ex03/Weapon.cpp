/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 16:06:17 by alalmazr          #+#    #+#             */
/*   Updated: 2022/12/16 12:49:11 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){}

Weapon::Weapon(const std::string type)
{
	this->setType(type);
}

Weapon::~Weapon(){}

const std::string &Weapon::getType() const
{
	return (this->type);
}

void Weapon::setType(const std::string &type)
{
	this->type = type;
}
