/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/24 20:32:54 by alalmazr          #+#    #+#             */
/*   Updated: 2022/12/24 20:46:09 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

Claptrap::Claptrap(){
	std::cout << ""
}

Claptrap::Claptrap(std::string name){
	this->name = name;
	this->hp = 10;
	this->ep = 10;
	this->ad = 0;
}

Claptrap::~Claptrap(){}

void attack(const std::string &target){
	
}
void takeDamage(unsigned int amount);
void beRepaired(unsigned int amount);