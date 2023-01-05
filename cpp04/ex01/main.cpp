/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alalmazr <alalmazr@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/02 15:47:43 by alalmazr          #+#    #+#             */
/*   Updated: 2023/01/05 17:07:49 by alalmazr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include <vector>


int main() { 

	 std::vector<Animal*> animals; 

	 for (int i = 0; i < 3; i++) { 

		 animals.push_back(new Dog()); 
		 std::cout << std::endl;

	 } 
	std::cout << std::endl;
	 for (int i = 0; i < 3; i++) { 

		 animals.push_back(new Cat()); 
		 std::cout << std::endl;

	 } 
	 std::cout << std::endl;

	 for (int i = 0; i < 3; i++) { 

		 delete animals[i]; //deletes the animal object, calls the destructor of the derived class first, then the base class destructor.  
std::cout << std::endl;
	 }  

 }
