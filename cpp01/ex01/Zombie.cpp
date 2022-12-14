/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 10:35:05 by alalmazr          #+#    #+#             */
/*   Updated: 2022/12/13 12:49:13 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie () {
}

Zombie::Zombie(std::string name) {
	this->name = name;
	this->announce();
}

Zombie::~Zombie() {
    std::cout << "[Destroying] zombie " << this->getName() << std::endl;
}

void Zombie::announce() {
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::getName()
{
	return (this->name);
}

void Zombie::setName(std::string name)
{
	this->name = name;
}
