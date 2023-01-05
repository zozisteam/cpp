/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:45:29 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/05 16:33:41 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
    std::cout << "WrongAnimal constructor called" << std::endl;
    type = "";
}

WrongAnimal::~WrongAnimal() {
    std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(std::string type) {
    std::cout << "WrongAnimal copy constructor called" << std::endl;
    this->type = type;
}

WrongAnimal  &WrongAnimal::operator=(const WrongAnimal &other)
{
	std::cout << "WrongAnimal assignment operator called" << std::endl;
	this->type = other.type;
	return *this;
}

void		WrongAnimal::makeSound() const
{
	std::cout << "WRONG ooga booga" << std::endl;
	return ;
}

void WrongAnimal::setType(std::string type)
{
	this->type = type;
}

std::string WrongAnimal::getType() const
{
	return this->type;
}
