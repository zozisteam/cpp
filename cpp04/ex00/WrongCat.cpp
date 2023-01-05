/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:46:24 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/05 17:37:58 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

 #include "WrongCat.hpp" 

 #include <iostream> 

 WrongCat::WrongCat() { 

     std::cout << "WRONGCat constructor called" << std::endl; 

     type = "WrongCat"; 

 } 

WrongCat::WrongCat(const WrongCat& other)
{
 std::cout << "WRONGCat copy constructor called" << std::endl; 
 this->type = other.type;
}

WrongCat &WrongCat::operator=(const WrongCat &other)
{
	 std::cout << "WRONG CAT Assignment operator called" << std::endl; 
	 this->type = other.type;
	 return *this;
}

 WrongCat::~WrongCat() { 

     std::cout << "WRONGCat destructor called" << std::endl; 

 } 

  void WrongCat::makeSound() const{ 

     std::cout << "poomeow!" << std::endl;  

 }
