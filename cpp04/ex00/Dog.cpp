/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:46:02 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/02 15:46:04 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Dog.cpp 
#include "Dog.h" 
#include <iostream> 

 Dog::Dog() { 
     std::cout << "Dog constructor called" << std::endl; 
     type = "Dog"; 
 } 

 Dog::~Dog() { 
     std::cout << "Dog destructor called" << std::endl; 
 } 

 void Dog::makeSound() { 
     std::cout << "Woof!" << std::endl; 
 }
