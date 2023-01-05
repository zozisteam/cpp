/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:46:24 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/05 17:06:57 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "Cat.hpp" 

 #include <iostream> 

 Cat::Cat() { 

     std::cout << "Cat constructor called" << std::endl; 
	 this->brain = new Brain;
     type = "Cat"; 

 } 

 Cat::~Cat() { 

     std::cout << "Cat destructor called" << std::endl; 
	 delete this->brain;

 } 

Cat::Cat(const Cat& other)
{
 std::cout << "Cat copy constructor called" << std::endl; 
 this->type = other.type;
 	 this->brain = other.brain;
}

Cat &Cat::operator=(const Cat &other)
{
	 std::cout << "assignment operator called" << std::endl; 
	 this->type = other.type;
	 this->brain = other.brain;
	 return *this;
}

 void Cat::makeSound() const{ 

     std::cout << "Meow!" << std::endl;  

 }