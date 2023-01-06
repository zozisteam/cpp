/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:45:29 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/06 18:24:50 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() {
    std::cout << "Animal constructor called" << std::endl;
    type = "some animal";
}

Animal::~Animal() {
    std::cout << "Animal destructor called" << std::endl;
}

Animal::Animal(std::string type) {
    std::cout << "Animal copy constructor called" << std::endl;
    this->type = type;
}

Animal  &Animal::operator=(const Animal &other)
{
	std::cout << "Animal assignment operator called" << std::endl;
	this->type = other.type;
	return *this;
}

void		Animal::makeSound() const
{
	std::cout << "ooga booga" << std::endl;
	return ;
}

void Animal::setType(std::string type)
{
	this->type = type;
}

std::string Animal::getType() const
{
	return this->type;
}
