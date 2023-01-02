/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:46:24 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/02 15:46:37 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "Cat.h" 

 #include <iostream> 

 Cat::Cat() { 

     std::cout << "Cat constructor called" << std::endl; 

     type = "Cat"; 

 } 

 Cat::~Cat() { 

     std::cout << "Cat destructor called" << std::endl; 

 } 

 void Cat::makeSound() { 

     std::cout << "Meow!" << std::endl;  

 }