/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:46:02 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/05 17:05:27 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Dog.cpp 
#include "Dog.hpp" 
#include <iostream> 

 Dog::Dog() { 
     std::cout << "Dog constructor called" << std::endl; 
     type = "Dog"; 
	 this->brain = new Brain;
 } 

 Dog::~Dog() { 
     std::cout << "Dog destructor called" << std::endl; 
	 delete this->brain;
 } 

Dog::Dog(const Dog &other)
{
 std::cout << "Dog copy constructor called" << std::endl; 
 this->type = other.type;
 	 this->brain = new Brain;
}

Dog &Dog::operator=(const Dog &other)
{
	 std::cout << "Dog assignment operator called" << std::endl; 
	 this->type = other.type;
	 this->brain = other.brain;
	 return *this;
}

 void Dog::makeSound() const { 
     std::cout << "Woof!" << std::endl; 
 }
