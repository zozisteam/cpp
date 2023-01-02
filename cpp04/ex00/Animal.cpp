/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:45:29 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/02 15:56:46 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.h"

Animal::Animal() {
    std::cout << "Animal constructor called" << std::endl;
    type = "";
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(std::string type) {
    std::cout << "Animal copy constructor called" << std::endl;
    this.type = type;
}

void Animal::setType(std::string type)
{
	this.type = type;
}

std::string getType()
{
	return this.type;
}
